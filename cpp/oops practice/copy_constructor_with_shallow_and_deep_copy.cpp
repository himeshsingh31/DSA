
#include <iostream>
using namespace std;

class a{
private:

public:
static int i; //static keyword use 
a(){
    cout<<"default constructor called "<<endl;
}

a(const a& obj){
cout<<"copy  constructor called "<<endl;
}
~a(){
    cout<<"manual destructor called"<<endl;
}
};
int a::i=10;//static keyword initialisation only occurs outside the declared fxn
int main()
{
a x;
a y=x;
a *q=new a();
delete q;
cout<<a::i<<endl;//static keyword use 

    return 0;
}



