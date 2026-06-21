#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertnode(int data, node *&head)
{
    node *temp = new node(data);
    temp->prev = head;
    head->next = temp;
    head = temp;
}
void printnode(node *n1)
{
    node *head = n1;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}



void deletenode(int position, node *&head)
{
    int count = 1;
    node *temp = head;
    if (position == 1)
    {
        node *temp2 = head->next;
        head->next = NULL;
        head->prev = NULL;
        delete head;
        temp2->prev = NULL;
        head=temp2;
    }
    else
    {

        while (count < position)
        {
            temp = temp->next;
            count++;
        }
if(temp->next==NULL){
    temp->prev->next=NULL;
    temp->prev=NULL;
    delete temp;
}
    }
}

int main()
{
    node *n1 = new node(10);
    node *head = n1;
    insertnode(20, head);
    insertnode(30, head);
    insertnode(40, head);
    insertnode(50, head);

    printnode(n1);

    deletenode(5, n1);
    printnode(n1);
    return 0;
}

/// this code is not a fully working doubly linked list and it just work as for checking the deleting nodes for the last node .
