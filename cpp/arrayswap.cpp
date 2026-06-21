#include <iostream>
using namespace std;

void simplearrprint(int arr[], int n)
{
    int size;
    int i;
    size = n;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapprint(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int i;
    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    simplearrprint(arr,n);
    
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {0, 9, 8, 7, 6, 5};

    cout << "arr1 before the swap is ";
    simplearrprint(arr1, 5);

    cout << "arr1 after the swap is ";
    swapprint(arr1,5);

    cout << "arr2 before the swap is ";
    simplearrprint(arr2, 6);

    cout << "arr2 after the swap is ";
swapprint(arr2, 6);
    return 0;
}