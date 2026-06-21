#include <iostream>
#include <array>
using namespace std;
int main(){
array<int,10>arr{1,0,1,0,1,0,1,1,0,0};
int start=0;
int end=arr.size()-1;
while(start<end){
if (arr[start]==1 && arr[end]==0)
{
  swap(arr[start],arr[end]);
  start++;
  end--;
}
else if (arr[start]==0)
{
  start++;
}
else if (arr[end]==1)
{
  end--;
}

}
int i;
for ( i = 0; i < arr.size(); i++)
{
  cout<<arr[i]<<"  ";
}
cout<<endl;



// int main() {
// array<int , 7> arr={1,2,3,4,5,6,7};
// int i;
// for ( i = 0; i < arr.size()-1; i+=2)
// {
//   int temp=arr[i];
//   arr[i]=arr[i+1];
//   arr[i+1]=temp;
// }
// int j;
// for ( j = 0; j <arr.size() ; j++)
//  {
// cout<<arr[j]<<"  ";
//  }












// int start=0;
// int end=arr.size()-1;
// for (start= 0; start <= end; start++)
// {
//   int temp=arr[start];
//   arr[start]=arr[end];
//   arr[end]=temp;
//   end--;
// }
// int i;
// for ( i = 0; i <arr.size() ; i++)
// {
//   cout<<arr[i]<<"  ";
// }


  return 0;
}