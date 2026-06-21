#include <iostream>
using namespace std;

void sortedarr(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    int arr[7] = { 2, 1, 2, 0, 1, 2}/* {14, 19, 17, 13, 15, 11, 18}*/;
    cout << "the normal arr is as follow:  " << endl;
    arrprnt(arr, 7);
    cout << "the sorted arr is as follow :  " << endl;
    sortedarr(arr, 7);
    arrprnt(arr, 7);

    return 0;
}