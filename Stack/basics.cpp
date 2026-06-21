#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> honey;
    honey.push(22);

if(honey.empty()==false){
    cout<<"there is some value inside this stack"<<endl;
}

else{
    cout<<"the stack is empty"<<endl;
}
    return 0;
}