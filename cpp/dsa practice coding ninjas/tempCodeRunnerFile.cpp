#include <iostream>
#include <vector>
using namespace std;
// int  selectionsort(int start,int arr[],int size){
// if(start==size-1){
// return 0;
// }


// int min =start;
// for(int i=start;i<size;i++){
//     if(arr[i]<arr[min]){
//         min=i;
//     }
// }
// int temp = arr[start];
// arr[start]=arr[min];
// arr[min]=temp;


// return selectionsort(start+1,arr,size);
// }



// int bubblesort(int end,int arr[]){
//     if(end==1){
//         return 0 ;
//     }

//     for(int i=0;i<end-1;i++){
// if(arr[i]>arr[i+1]){
//     int temp = arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp;
// }
//     }


//     return bubblesort(--end,arr);
// }


int insertionsort(int index,int size,int arr[]){
    int temp;
    if(index==size){
        return 0;
    }
int prev = index-1;
while(prev!=-1){
    temp= arr[index];
    if(temp<arr[prev]){
        arr[prev+1]=arr[prev];
        prev--;
    }

    else{
        break;
    }

}
arr[prev+1]=temp;

return insertionsort(index+1,size,arr);

}
int main()
{
int arr[10]={12,3,2,34,32,31,3,22,23,97};
for(int i = 0;i<10;i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;

// selectionsort(0,arr,10);

// bubblesort(10,arr);

insertionsort(1,10,arr);
for(int i = 0;i<10;i++){
    cout<<arr[i]<<"  ";
}

    return 0;
}
