#include <stdio.h>
#include <iostream>
using namespace std;

class list
{
public:
    int data;
    list *next;

    list(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert(int data, list *&x)
{
    list *temp = new list(data);

    x->next = temp;

    x = temp;
}

// void insert(int data, list *&x)
// {
//     list *temp = new list(data);

//     temp->next = x;

//     x = temp;
// }

int main()
{
    list *a = new list(10);
    list *head = a;
    insert(20, head);
    insert(30, head);
    insert(40, head);
    insert(50, head);
    insert(60, head);

    while (a != NULL)
    {
        cout << a->data << endl;
        a = a->next;
    }
}