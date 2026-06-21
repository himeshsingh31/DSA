#include <iostream>
using namespace std;
int main() {
int n;
int column = 0;
int x=0;

cout<<"enter the number you want"<<endl;
cin>>n;

while (column<n)
{
int prntnum =1 ;
int row =0;
    while (row<=x)
    {
        cout<<prntnum<<"  ";
    prntnum++;
    row++;
    }
    x++;
    column++;
    cout<<endl;
}

    return 0;
}