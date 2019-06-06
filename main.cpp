#include "List.h"
#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;


int main() {
    List Lilian;

    Lilian.AddNode(3); //making new nodes to make a list
    Lilian.AddNode(5); //making new nodes to make a list
    Lilian.AddNode(7); //making new nodes to make a list
    Lilian.AddNode(9); //making new nodes to make a list
    Lilian.PrintList(); //making new nodes to make a list

    cout << "\nElement in index 1 is " << Lilian.GetNth(1) << endl; //invoking getNth function to display index 1 which is 5

    Lilian.Split(); //supposed to call the split function
    //prints the list

    Lilian.DeleteNode(7); //deletes one node which is the 7
    Lilian.PrintList(); //prints list again after deleting a node

}
