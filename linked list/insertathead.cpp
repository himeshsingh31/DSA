#include <stdio.h>
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    { // only call for the *head =n1;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;

        cout << "we have inserted the " << data << endl;
    }
};

void inserthead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void printnode(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *n1 = new node(10);
    node *head = n1;
    printnode(head);
    inserthead(head, 20);
    inserthead(head, 30);
    inserthead(head, 40);
    inserthead(head, 50);
    printnode(head);
}
