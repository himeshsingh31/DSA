#include <iostream>
using namespace std;

int main()
{
int row;
int count;
int column;
int items=0;
int prntnum=0;
cout<<"please enter the num you want to see the magic!"<<endl;
cin>>count;
for ( row = 0; row < count; row++)
{
    for ( column = 0; column < items; column++)
    {
      cout<< prntnum<<""; 
prntnum--;
    }
     items++;
     prntnum++;
    
cout<<endl;
}

    return 0;
}