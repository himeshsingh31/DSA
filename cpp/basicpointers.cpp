#include <iostream>
using namespace std;
int main() {
    int x=20;
    int* ptr = &x;

*ptr =10;
cout<<x<<endl;


    return 0;
}