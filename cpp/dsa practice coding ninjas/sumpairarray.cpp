#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<vector<int>> sumpair(vector<int> &arr, int n, int sum)
{
    vector<vector<int>> ans;
    int i, j;
    sort(arr.begin(),arr.end());
    for (i = 0; i < arr.size() - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                ans.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
            }
        }
    }

    return ans;
}
int main()
{

    vector<int> arr = {4, 5, 6, 7, 3};
    cout << "the pair for the sum of the 9 is : " << endl;
    vector<vector<int>>result= sumpair(arr,7,9);
for ( auto pair:result)
{
cout<<pair[0]<<" "<<pair[1]<<endl;
}

    return 0;
}