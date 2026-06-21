#include <stdio.h>
#include<iostream>
using namespace std;


class ll{

    public:
    int data;
ll* next ;

ll(int data){
    this->data = data;
    this ->next = NULL;
}

};

void insertathead(ll* &head,int data){
ll * temp = new ll(data);
temp->next = head;
head = temp;
}


void printnode(ll* head){
    while(head!= NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

void insertcircular(ll *&head,ll* &tail,int x)
{ll * temp = new ll(x);
if (head==NULL){
temp->next = temp;
    head = temp;
tail = temp;
}

else {
    tail->next = temp;
    tail  = temp;
temp->next = head;

}
}
void printcircular(ll *copy){
    ll* head = copy;

    
do
{
cout<<copy->data<<endl;
copy = copy->next;
}
while(copy!= head);
}

int main(){
ll*  head = NULL;
ll* tail = NULL;

// insertathead(head,10);
// insertathead(head,20);
// insertathead(head,30);
// insertathead(head,40);
// insertathead(head,50);


insertcircular(head ,tail, 10);
insertcircular(head ,tail, 20);
insertcircular(head ,tail, 30);
insertcircular(head ,tail, 40);
insertcircular(head ,tail, 50);
insertcircular(head ,tail, 60);

ll* copy = head;
printcircular(copy);

cout<<endl;

//for checking that the loop is formed or not 
cout<<head->data<<endl;
cout<<tail->next->data<<endl;
}