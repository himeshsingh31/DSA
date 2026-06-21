#include<stdio.h>
#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int * arr;

    stack(int size){
this->size = size ;
top = -1;
arr = new int[size];
    }


    void pop(){
        if(size ==-1){
            cout<<"the stack is empty"<<endl;
        }
        else {
            top--;
        }
    }

        void push(int element){
            if(size-top>1){
            top++;
            arr[top]=element;
        }

        else{
            cout<<"the stack is overflow!"<<endl;
        }
    }

    void peek(){
if(top>=1){
    cout<<arr[top]<<endl;
}
else{
    cout<<"the stack is empty!"<<endl;
}
    }

    bool isempty(){
        if(top==-1){
            return true;
        }

        else{
          return false ;
        }
    }

    };

int main(){
stack s1(10);

// s1.peek();
// s1.push(1);
// s1.push(2);
// s1.push(3);
// s1.push(4);
// s1.push(5);
// s1.pop();
// s1.peek();

cout<<s1.isempty()<<endl;
return 0;

}