#include <iostream>
using namespace std;
int main() {
    int n=0;
    int column=0;
char prntchar='A';
cout<<"enter the num you want to see the magic!"<<endl;
cin>>n;
while (column<n)
{
    int row=0;  
    while (row<n)
    {
        cout<<prntchar<<"  ";
        row++;
    }
        prntchar++;
    column++;
    cout<<endl;
}


    return 0;
}