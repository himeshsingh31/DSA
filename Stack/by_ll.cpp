#include <stdio.h>
#include <iostream>
using namespace std;
class stack{
    public:
    int data;
stack* next;
stack(int data){
    this->data = data;
next =NULL;
}
};


class stackmanager{
    public:
stack * top;
int size;
stackmanager(){
    top =NULL;
    
}

void push(int data){
stack *temp = new stack(data);
temp->next = top ;
top = temp;
}

void pop(){
    if(top==NULL){
        cout<<"the stack is empty!"<<endl;
        return;
    }
    stack*temp = top;
    top= top->next;
    delete temp;
    
}

void peek(){
      if(top==NULL){
        cout<<"the stack is empty!"<<endl;
        return;
    }
    cout<<top->data<<endl;
}

bool isempty(){
    if(top== NULL){
        return true;
    }
    else{
        return false;
    }
}
};

int main()
{
   
stackmanager bucket;

bucket.push(10);
bucket.push(20);
bucket.push(30);
bucket.push(40);
bucket.push(50);
bucket.push(60);

bucket.peek();

bucket.pop();

bucket.peek();
return 0;
}
