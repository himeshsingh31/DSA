#include <iostream>
using namespace std;
int main()
{
    int row = 0;
    int n;
    int toprint = 1;
    cout << "please enter the number you want to see the patternof:" << endl;
    cin >> n;

    while (row <= n)
    {
    int column = 1;
        while (column <= row)
        {
            cout << toprint<<" ";
            toprint++;
            column++;
        }
        row++;
        cout << endl;
    }

    return 0;
}