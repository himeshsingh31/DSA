#include <stdio.h>
#include <iostream>
using namespace std;

class list
{
public:
    int data;
    list *next;
list *prev;
    list(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void insert(int data, list *&x)
{
    list *temp = new list(data);

    x->next = temp;
    temp->prev = x;

    x = temp;
}


void anywhere(int valu,int place,list * &h  ){
list* temp2 = new list (valu);

int count  = 1;
list * head = h ;
if(place<1){
    cout<<"the place is invlaid !"<<endl;
    return;
}
else if(place==1 ){
temp2->next = h;
h->prev = temp2;
h=temp2;
return;
}
while (count <place-1){
    head = head ->next;
    count++;
}


if (head->next == NULL){
    head->next= temp2;
    temp2->prev = head ;
return;
}


temp2->next =head ->next;
head->next->prev = temp2;

head->next = temp2;
temp2->prev = head;



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



anywhere (1121,1,a);

    while (a != NULL)
    {
        cout << a->data << endl;
        a = a->next;
    }
}