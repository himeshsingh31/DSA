#include <iostream>
using namespace std;
void sortedarr(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}
void arrprnt(int arr[], int n)
{

    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    int arr[7] = {7, 6, 5, 4, 3, 2, 1};
    cout << "the normal  arr is as follow:  " << endl;
    arrprnt(arr, 7);
    cout << "the bubble sorted arr is as follow :  " << endl;
    sortedarr(arr, 7);
    arrprnt(arr, 7);

    return 0;
}