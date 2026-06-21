#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age=12;
    int height;

public:
    int getAge() {
        return age;
    }
};

int main() {
Student s1;
cout<<s1.getAge()<<endl;
    return 0;
}
