#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 0;
    int j = 1;
    cout << "enter the number for which you want to see the star pattern: " << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j =0 ; j <= i; j++)
        {
            cout << "* ";
        }
        j++;

        cout << endl;
    }

    return 0;
}