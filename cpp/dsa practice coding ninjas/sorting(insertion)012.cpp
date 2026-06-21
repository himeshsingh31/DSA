#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedarr(vector<int> &arr)
{
    int i, j;
    for (i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j + 1] = temp;
    }
    return arr;
}
vector<int> arrprnt(vector<int> &arr)
{

    int i;
    for (i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    // int arr[7] = {14,19,17,13,15,11,18};
    vector<int> arr = {0, 1, 2, 1, 2, 0, 1, 2, 1, 2, 0, 1, 2};
    cout << "the normal arr is as follow:  " << endl;
    arrprnt(arr);
    cout << "the sorted arr is as follow :  " << endl;
    vector<int>ss=sortedarr(arr);
arrprnt(ss);
    return 0;
}
