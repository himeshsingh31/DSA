#include <stdio.h>
#include<iostream>
using namespace std;

class Node
{public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class queue
{
 
    
    public:
    Node* front;
    Node* back;
 
    queue()
    {

        front = NULL;
    back = NULL;
    }

    void enqueue(int data)
    {
        // Node *temp = new Node(data);
Node*temp = new Node(data) ;
        
        if (front  == NULL && back == NULL)
        {
            front = back = temp;
        }
        else
        {
            back->next = temp;
            back = temp;
        }
    }
    void frontview(){
        cout<<front->data<<endl;
    }

    void dequeue(){
        Node* temp = front;

        if(front==NULL &&back == NULL){
            cout<<"the list is empty!"<<endl;

        }

        front =  front->next;
        delete temp;
    }
};

int main()
{
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.frontview();

}