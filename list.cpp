#include "List.h"
#include <cstdlib>
#include <iostream>
#include <assert.h>

#include "List.h" //to make sure header file got copied over

using namespace std;
#define NDEBUG //to enabled usage of assert

List::List() { //default constructor setting all data members to null
    head = NULL;
    current = NULL;
    temp = NULL;
}

void List::AddNode(int addData) { //adding new nodes to make a linked list
    nodePointer n = new node; //making new node to allocate to node pointer n
    n->next = NULL; //the next in new node is pointed to null
    n->data = addData; //data in the new node is set to integer addData

    if (head != NULL) { //if list is already created
        current = head; //advance current pointer to the last node
        while (current->next != NULL) { //if next node isnt the end
            current = current->next; //point current to next node
        }
        current->next = n; //connect last node to new node we created
    }
    else {
        head = n; //make new node be the front
    }
}

void List::DeleteNode(int delData) { //function to delete nodes we dont want
    nodePointer delPtr = NULL; //making new node pointer delPtr have nothing inside
    temp = head; //temporary node points to head/first node
    current = head; //current node points to head/first node

    while (current != NULL && current->data != delData) { //will go to the end or find the node we want to delete
        temp = current; //temporary node is assigned to current node
        current = current->next; //current node is pointed to next node
    }
    if (current == NULL) { //id current is null then we did not find what we were looking for
        cout << delData << " was not in the list" << endl;
        delete delPtr; //will not take up more memory
    }
    else { //if deleted one was found
        delPtr = current;
        current = current->next; //patching up list to keep list going
        temp->next = current; //patching up list to keep list going
        if (delPtr == head) { //if the node we want to delete is the first node
            head = head->next; //point first node to the next node
            temp = NULL;
        }
        delete delPtr; //deletes memory of delPtr
        cout << "The value " << delData << " was deleted" << endl;
    }
}

int List::GetNth(int index) { //takes a linked list and an integer index and returns the data value stored in the node at that index position
    current = head; //sets current node to first node
    int currIndex = 0; //integer current index is 0 so starting at the beginning

    while (current != NULL) { //if there is something in current meaning if the list hasnt ended yet
        if (currIndex == index) { //if the current index number is equal to the number I put when setting parameter
            return (current->data); //store the current value in the current node into its data
        }
        else {
        currIndex++; //increase current index by 1
        current = current->next; //set current node to the next node
        }
    }
    assert(0); //If it is not, GetNth() should assert() fail (or you could implement some other error case strategy).

}


void List::Split() { //which given a list, splits it into two sublists — one for the front half, and one for the back half.
    //first have to count how mny elements are in linked list
    int paul = 0; //sets integer paul to 0
    current = head; //sets current node to head the beginning of list
    while (current != NULL) { //if there is something in the list meaning its not at its end
        paul++; //paul will improve by 1
        current = current->next; //current node will be pointed to the next node
    }
     cout << "the number of elements in the list are " << paul << endl; //print out pauls value

    node* us; //hint from class
    node* sl;
    us = head;
    int splitat;
    if (paul % 2 == 0) {
        splitat = paul/2;
        int count = count - splitat;
    }
    else {
        splitat = paul/2 + 1;
    }
    int nc = 1;
    while (nc != splitat) {
        us = us ->next;
        nc++;
        sl = us->next;
    }
}

void List::PrintList() { //to print out the list
    current = head; //current is the assigned to the front of the list
    while (current != NULL) { //makes sure theres something in the list
        cout << current->data << endl;
        current = current->next;
    }
}
