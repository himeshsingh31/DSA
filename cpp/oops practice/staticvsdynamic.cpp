
#include <iostream>
using namespace std;
// class A
// {
// private:
//     int x;
//     string q;

// public:
//     char z;
//     int l=10;
//     int *arr;
//     A(){}
//       A(int n) {arr = new int[n]; };

//       ~A(){
// delete[] arr;
//       }
// };

// int main()
// {
//     A obj1;
// A *obj2= new A();
//     cout<<obj1.l<<endl;
//     cout<<(*obj2).l<<endl;



//     return 0;
// }




class Student {
private:
    int age;
public:
    // Constructor
    Student() {
        age =10;  // initialize private variable
    }

    // void displayAge() {
    //     cout << "Age is " << age << endl;  // use private variable
    // }
};

int main() {
    Student s;  // call constructor to initialize age
    cout<<s.age<<endl; // prints: Age is 20
}