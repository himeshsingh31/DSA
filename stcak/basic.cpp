#include <iostream>
// #include <stack>
using namespace std;
class stack
{
public:
    int index = 0;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    void push(int inte)
    {
        if (size - index > 0)
        {
            arr[index] = inte;
            index++;
        }
        else
        {
            cout << "the stack is overflow" << endl;
        }
    }

    void  pop(){
        if(index-1>=0){
            index--;
        }
        else{
            cout<<"invalid order "<<endl;
        }
    }

    int top(){
        if(index-1>=0){
            return arr[index-1];
        }
        else{
cout<<"invalid order"<<endl;
        }
    }

    bool isempty(){
        if(index>=0){
            return 1;
        }
        else{
            return 0;
        }

    }

    // Destructor (CRITICAL for memory management)
    ~stack()
    {
        delete[] arr;
    }


};
int main()
{
    // std way to create a stack
    //      stack<int>  s;
    //     s.push(10);
    //     s.push(20);
    //     while(s.size()!=-1){
    //     cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // };

    stack s(4);

    s.push(10);
    s.push(20);
    s.push(30);


    s.pop();
    cout<<s.top()<<endl;


    if(s.isempty()){
        cout<<"the stack is filled with some material"<<endl;
    }
    else {
        cout<<"the stack is empty"<<endl;
    }
    return 0;
}