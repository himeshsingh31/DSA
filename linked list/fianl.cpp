#include<stdio.h>
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;

node(int data){
this->data = data;
this->next = NULL;
}

};

void attail(int data,node* &tail){

    node* x = new node(data);
tail->next = x;
tail = x;
}


void printer(node* head)
{
    while(head!= NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }

    cout<<"NULL";
}

int main(){
int x;
cout<<"enter the first value of the ll to start it ."<<endl;
cin>>x;
    node* head = new node(x);
node* first = head;
attail(20,first);
attail(30,first);
attail(40,first);
attail(50,first);
attail(60,first);
attail(70,first);
attail(80,first);


printer(head);

}