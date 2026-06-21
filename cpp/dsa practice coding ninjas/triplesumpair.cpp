#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> triplesum(vector<int> &arr,int n,int sum){
    vector<vector<int>>ans;
    int i,j,k;
    for ( i = 0; i < arr.size()-2; i++)
    {
        for ( j = i+1; j < arr.size()-1; j++)
        {
            for ( k = j+1; k < arr.size(); k++)
            {
                if (arr[i]+arr[j]+arr[k]==sum)
                {
                    ans.push_back({arr[i],arr[j],arr[k]});
                    arr[i]=-7778;
                }
             
                
            }
            
        }
        
    }
    if (ans.empty())
    {
        cout<<"-1"<<endl;
                        }
    return ans;
    
}
int main() {
    vector<int>arr={0,1,2,3,4,5,6,7};
    // vector<vector<int>>result=triplesum(arr,8,8);
    vector<vector<int>>result=triplesum(arr,8,8);
    cout<<"the triplet of the num you want to see is as follow : "<<endl;
    for (auto pair :result)
    {
cout<<pair[0]<<"  "<< pair[1]<<"  "<<pair[2]<<endl;
    }
    

    return 0;
}