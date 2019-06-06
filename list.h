#include <iostream>

#ifndef LIST
#define LIST

typedef int DataType;
class List {
private:
    class node {
        public:
        DataType data;
        node* next;
    };

    typedef struct node *nodePointer;
    nodePointer head;
    nodePointer current;
    nodePointer temp;

public: //this is where functions go
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    int GetNth (int index);
    void Split();
    void PrintList();

};

#endif // LIST
