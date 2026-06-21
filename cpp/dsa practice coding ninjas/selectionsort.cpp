#include <iostream>
using namespace std;
void arrprnt(int arr[], int n);
int *sortedarr(int arr[], int n);

int *sortedarr(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
int        minindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;

            }
        }
        swap(arr[minindex], arr[i]);
    }
    return arr;
}

// int *sortedarr(int arr[], int n)
// {
//     int i;

//     for (i = 0; i < n - 1; i++)
//     {
//         int j;
//         int minindex=i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minindex])
//             {
// minindex=j;

//             }
//         }
//         swap(arr[i], arr[minindex]);
//     }
//     return arr;
// }
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
    cout << "the normal arr is as follow:  " << endl;
    arrprnt(arr, 7);
    cout << "the sorted arr is as follow :  " << endl;
    sortedarr(arr, 7);
    arrprnt(arr, 7);

    return 0;
}