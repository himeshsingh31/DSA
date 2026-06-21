#include <iostream>
using namespace std;
int main()
{
    
    int a;
    int number = 1;
    int sum = 0;
    cout << "enter the number you want to see the sum" << endl;
    cin >> a;
        for (number = 1; number <= a; number++)
        {
            sum = sum + number;
        }   
            cout << sum << "  ";
    return 0;

}