#include <iostream>

using namespace std;
int main()
{
    int i;
    int n;
    int j;
    int p = 1;
    cout << "enter the value you want to see the traingle " << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= p; j++)
        {
            cout << j;
        }
        p++;

        cout << endl;
    }

    return 0;
}