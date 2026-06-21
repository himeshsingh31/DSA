#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
class queu
{
public:
  int *arr;
  int front;
  int rear;
  int size;
  queu(int size)
  {
    this->size = size;
    front = -1;
    rear = -1;
    arr = new int[size];
  }
  
    void enque(int val) {
        // Overflow condition (circular queue)
        if ((rear + 1) %size ==front ) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        // First insertion
        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;
    }
//   void enque(int val)
//   {

//      if(front ==-1){
//  front =0;
//  rear =0;
//  }
//     else if(rear+1>=size  ){
//    cout<<"the queue is overflow !"<<endl;
//       return;
//     }

// else{
//   rear = rear+1;
// }

// arr[rear]=val;

// }

int pop(){
  if(front==-1){
    cout<<"the queue is underflow !"<<endl;
    return 0;
  }
  else if(front == rear){
    front =-1;
    rear =-1;
    return 0;
  }
  int val = arr[front];
front = (front+1)%size;
return val;
}



void fron(){
  cout<<"this is front = "<< front<<"and this is rear = "<<rear<<endl;}
};



int main()
{
queu q1(10);

q1.enque(1);
q1.enque(2);
q1.enque(3);
q1.enque(4);
q1.enque(5);
// q1.enque(6);
// q1.enque(7);
// q1.enque(8);
// q1.enque(9);
// q1.enque(10);


q1.pop();
q1.pop();
q1.pop();
q1.pop();
q1.pop();
q1.fron();



  return 0;
}