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
        this->next = NULL;
    }
};

class circularlist
{
public:
    node *head;
    node *tail;

    circularlist()
    {
        head = tail = NULL;
    }
};
void insertnode(int data, node *&head, node *&tail)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        tail->next = head;
    }
    else
    {

        temp->next = head;
        tail->next = temp;
        head = temp;
    }
}

void inserttail(node *&head, node *&tail, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        tail->next = head;
    }

    else
    {
        tail->next = temp;
        temp->next = head;
        tail = temp;
    }
}

// Helper function to display the list
void display(node *&head)
{
    if (head == NULL)
        return;

    node *current = head;
    do
    {
        cout << current->data << " -> ";
        current  = current->next;
    } while (current!= head );
    cout << "HEAD" << endl;
}

void deletendoe(int position,node*&head,node*&tail)
{
    node *temp;
    node*curr = head ;
    node* prev = NULL;

    if (position == 1)
    {
tail->next=head->next;
delete head;
head =head ->next;
    }
        else
        {int count = 1;
            while(count<position){
    prev= curr;
    curr = curr->next;
    count++;
            }
            prev->next = curr->next;
            delete curr ;
            
        }
}

int main()
{
    circularlist cll;
    insertnode(10, cll.head, cll.tail);
    insertnode(20, cll.head, cll.tail);
    // insertnode(30, cll.head, cll.tail);
    // insertnode(40, cll.head, cll.tail);
    // insertnode(50, cll.head, cll.tail);

    display(cll.head);

    inserttail(cll.head, cll.tail, 99);
    inserttail(cll.head, cll.tail, 44);
    display(cll.head);
    cout << cll.tail->next << endl;
    cout << cll.head << endl;

    deletendoe(3,cll.head,cll.tail);
   display(cll.head);
    return 0;
}