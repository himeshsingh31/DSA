#include <iostream>
#include <array>
using namespace std;
int peak(int hello[],int size){
    int start=0;
    int end=size-1;
    int i;
    int mid=start+(end-start)/2;
    while (start<end)
    {
if (hello[mid]<hello[mid+1])
{
    start=mid+1;
}
else{
    end=mid;
}
mid=start+(end-start)/2;

    }
    
return mid;
}
int main() {
    int arr[] ={1,2,3,4,5,6,7,8,9,8,7,6,5,4};
    int peakindex=peak(arr,sizeof(arr)/sizeof(int));
    cout<<"so the index at which the peak is present is "<< peakindex<<endl;
    cout<<"and the value is "<<arr[peakindex]<<endl;

    return 0;
}