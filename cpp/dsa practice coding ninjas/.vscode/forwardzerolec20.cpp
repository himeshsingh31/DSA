#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    array<int,5>a1={1,3,5,7,9};
// array<int,3>a2={2,4,6};
// vector<int>arr;
// // for ( i = 0; i < arr.size(); i++)
// // {
// //     cout<<arr[i]<<"  ";
// // }
// // cout<<endl;
// // cout<<"but the sorted form of that is :"<<endl;

// // sort(arr.begin(),arr.end());


// int i = 0, j = 0; // Initialize variables
// while (i < a1.size() && j < a2.size()) {
//     if (a1[i] < a2[j]) {
//         arr.push_back(a1[i]);
//         i++;
//     } else {
//         arr.push_back(a2[j]);
//         j++;
//     }
// }

// while (i < a1.size()) {
//     arr.push_back(a1[i]);
//     i++;
// }

// while (j < a2.size()) {
//     arr.push_back(a2[j]);
//     j++;
// }


// for ( i = 0; i < arr.size(); i++)
// {
//     cout<<arr[i]<<"  ";
// }



    int i;
    array<int, 9> arr = {0, 1, 2, 0, 1, 5, 3, 0, 0};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int backer = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[backer]);
            backer++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}