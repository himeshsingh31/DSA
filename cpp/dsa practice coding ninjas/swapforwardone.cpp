#include <iostream>
using namespace std;
int swaparr(int arr[],int size){
    int i =0;
    int temp;
    for ( i = 0; i+1 < size; i+=2)
    {
        int temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
return 0;
    
}

void arrprnt(int arr[],int size ){
int i;
for ( i = 0; i < size; i++)
{
    cout<<arr[i]<<"  ";
}   
cout<< endl;

}
int main() {
    int arr[6]={1,2,3,4,5,6};
    cout << "the array before the swapping is as follow: " << endl;
arrprnt(arr,6);

cout<<"the array after the swapping is as follow : "<<endl;
swaparr(arr,6);
arrprnt(arr,6);

    return 0;
}