#include <iostream>
using namespace std;



int main() {
struct a{
    string l;
    double s; 
    double u;
    int x;
    char a;
    char b;
};


struct b{
    char b;
    string l;
    double s; 
    int x;
    char a;
    double u;
};
cout<<"the size of the a is :"<<sizeof(a)<<endl;
cout<<"the size of the struct b is : "<<sizeof(b)<<endl;
    return 0;
}

