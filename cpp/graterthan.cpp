#include <iostream>
#include<vector>
using namespace std;

void sort(vector<int>&arr){
for(int i=0;i<arr.size()-1;i++)
{
    int key=i;
for(int j=i+1;j<arr.size();j++){
if(arr[j]<arr[key]){
    key = j;
    j++;
}

}
swap(arr[key],arr[i]);
}
}
int main()
{
      vector<int>arr = {10,9,8,7,6};
  sort(arr);
   for(int a: arr){
    cout<<a<<endl;
   } 
    return 0;
}