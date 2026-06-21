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

void anywhere(int data, int place, list * &h)
{
    list *temp2 = new list(data);
    int count = 1;
    list *head = h;
    while (count < place - 1)
    {
        head = head->next;
        count++;
    }

    if (place == 1)
    {
        temp2->next = h;
        h = temp2;
        return;
    }

    else if (place < 1)
    {
        cout << "the place is invalid !" << endl;
        return;
    }
    temp2->next = head->next;
    head->next = temp2;
}
int main()
{
    list *a = new list(10);
    list *head = a;
    insert(20, head);
    insert(30, head);
    insert(40, head);
    insert(50, head);
    insert(60, head);

    anywhere(1212, 4, a);
    while (a != NULL)
    {
        cout << a->data << endl;
        a = a->next;
    }
}