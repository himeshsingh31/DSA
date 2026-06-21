#include <stdio.h>
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;

        cout << "we have inserted the " << data << endl;
    }
};

void insertattail(node *&prev, int data)
{
    node *head = new node(data);
    prev->next = head;
    prev = head;
}

void printnode(node *n1)
{
    while (n1 != NULL)
    {
        cout << n1->data << "  ";
        n1 = n1->next;
    }
}

int main()
{
    node *n1 = new node(10);
    node *prev = n1;

    insertattail(prev, 20);
    insertattail(prev, 30);
    insertattail(prev, 40);
    insertattail(prev, 50);
    printnode(n1);
}
