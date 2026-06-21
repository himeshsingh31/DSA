#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    long long barcode = 9983532111;
    string rtr = "dskfbsfbskj";

public:
    string model;
    char name;
    int age;
    int size;
    double num_plate;

    // the abouve variables also tell us about the greedy allignment .

    /*getters and setters example */
    void setc(long long x)
    {
        barcode = x;
    }

    long long getc()
    {
        return barcode;
    }
    /* *********************  */

    void model_name(string y)
    {
        model = y;
    }

    car()
    {
        cout << "default constructor called !" << endl;
    }

    car(string m, double np)
    {
        model = m;
        num_plate = np;
    }

    ~car()
    {
        cout << "destructor called " << endl;
    }
};
class Demo
{

public:
    static int count;
};
int Demo::count = 10;

int main()
{
    car c1;
    cout << sizeof(c1) << endl;
    cout << c1.size << endl;   // print the garbage value............
    c1.setc(9257406421);       // setter
    cout << c1.getc() << endl; //  getter

    car c2("xcent", 9264);
    cout << c2.model << endl;

    car c3;
    c3.model = "jeep";

    cout << c3.model << endl;

    cout << Demo::count << endl;

    return 0;
}