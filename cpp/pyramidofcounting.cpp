#include <iostream>
using namespace std;
int main()
{
    int prntsecnum = 1;
    int count;
    int row = 0;
    int column = 0;
    int space;
    int secnum;
    cout << "please enter the num you want to see the pyramid of counting!" << endl;
    cin >> count;

    for (row = 0; row < count; row++)
    {
        for (space = 1; space <= count - row; space++)
        {
            cout << " ";
        }

        int prntnum = 1;
        for (column = 0; column <= row; column++)
        {
            cout << "" << prntnum;
            prntnum++;
        }
        for (prntsecnum = row ;  prntsecnum >=1; prntsecnum--)
        {
            cout << prntsecnum;
          
        }


        cout << endl;
    }

    return 0;
}