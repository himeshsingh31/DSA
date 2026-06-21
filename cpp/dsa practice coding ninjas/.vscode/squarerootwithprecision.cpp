
#include <iostream>
#include <iomanip>//*********************** */
using namespace std;

int binarysearch(int num)
{
    int start = 0;
    int end = num;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
double precise(int rawsqr, int range, int question)
{
    double factor = 1;
    double finalvalue = -1;
    for (int i = 0; i < range; i++)
    {
        factor = factor / 10;
        for (double j = rawsqr; j*j <= question; j = j + factor)
        {
            finalvalue = j;
        }
    }
    return finalvalue;
}
int main()
{
    int x;

    cout << "please enter the num you want to see the square root." << endl;
    cin >> x;
    float tempsol = binarysearch(x);
    cout << fixed << setprecision(7);
    cout<<tempsol<<endl;
    cout << "the square root for the number " << x << " is " << precise(tempsol, 7, x) << endl;
    return 0;
}


