#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void inserthead(node *&head, int data)
{
    node *temp = new node(data);
    head->next = temp;
    head = temp;
}
void printnode(node *n1)
{
    while (n1 != NULL)
    {
        cout << n1->data << "  ";
        n1 = n1->next;
    }
    cout << endl;
}
void insertmiddle(int data, int position, node *forward)
{
    node *temp = new node(data);
    int count = 1;
    node *prev = NULL;
    while (count < position)
    {
        prev = forward;
        forward = forward->next;
        count++;
    }

    temp->next = forward;
    prev->next = temp;

    // or we can use the
    // prev->next = temp;
    // temp->next= forward;

    //  or we can use the
    // temp->next = prev-> next;
    // prev->next = temp
}
void deleteone(int position, node *&head)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else if (position > 1)
    {
        int count = 1;
        node *temp = NULL;
        while (count < position)
        {
            temp = head;
            head = head->next;
            count++;
        }

        temp->next = head->next;
        head->next = NULL;
        delete head;
    }
    else
    {
        cout << "the position is invalid " << endl;
    }
}
int main()
{
    node *n1 = new node(10);
    node *head = n1;

    inserthead(head, 20);
    inserthead(head, 30);
    inserthead(head, 40);
    inserthead(head, 50);
    inserthead(head, 60);
    printnode(n1);

    insertmiddle(99, 3, n1);
    printnode(n1);

    deleteone(1, n1);
    printnode(n1);
    return 0;
}