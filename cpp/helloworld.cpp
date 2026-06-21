#include <iostream>
using namespace std;

class Hero {
    // properties
private:
    int health;

public:
    char level;

    // Default constructor
    // Hero() {
    //     cout << "Simple constructor called" << endl;
    // }

Hero(){
    cout<<"default constructor callled successfully !"<<endl;
}


    // Parameterized constructor (1 parameter)
    Hero(int health) {
        this->health = health;
    }

    // Parameterized constructor (2 parameters)
    Hero(int health, char level) {
        this->level = level;
        this->health = health;
    }

    // Print function
    void print() {
        cout << "Level = " << level << ", Health = " << health << endl;
    }

    // Getters
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    // Setters
    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    // Calls default constructor
    Hero suresh;

    // Calls parameterized constructor (1 parameter)
    Hero ramesh(100);

    // Calls parameterized constructor (2 parameters)
    Hero mukesh(150, 'A');

    // Setting values using setters
    suresh.setHealth(50);
    suresh.setLevel('B');

    // Print objects
    suresh.print();
    ramesh.print();
    mukesh.print();

    return 0;
}
