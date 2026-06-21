#include <iostream>
using namespace std;
int main() {
    int n=0;
    int column=0;
    int p=0;
cout<<"enter the num you want to see the magic!"<<endl;
cin>>n;
while (column<n)
{
    int row=0;  
char prntchar='A';
    while (row<=p)
    {
        cout<<prntchar<<"  ";
        row++;
        prntchar++;

    }
    p++;
    column++;
    cout<<endl;
}


    return 0;
}
