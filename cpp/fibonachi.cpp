#include <iostream>
using namespace std;
int main()
{
    int n;
    int x = 1;
    int prntprev = 1;
    int prntnum = 1;
    cout << "pelase eneter the num you want to see the fibonachii series!" << endl;
    cin >> n;
    cout << "the series is as follow:" << endl;

    if (n == 1)
    {
        cout << "0";
    }
    else if (n == 2)
    {
        cout << "0  1";
    }
    else
    {

        while (x <= n)
        {
            cout << prntnum << endl;
            prntnum = prntnum + prntprev;
            prntprev = prntnum - prntprev;
            x++;
        }
    }

    return 0;
}