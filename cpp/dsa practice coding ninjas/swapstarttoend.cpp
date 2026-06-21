#include <iostream>
using namespace std;
int arrprnt(int arr[],int size);
int* reversearr(int arr[],int size){
    int i;
    int start=0;
    int end=size-1;
    for (start = 0;  start<end ; start++)
    {
swap(arr[start],arr[end]);
    end--;
    }
    return arr;
}

int arrprnt(int arr[],int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i]<<"  ";
    }
return 0;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Hello, World!" << endl;
    cout << "the arr before the reverse:" << endl;
    arrprnt(arr, 6);
cout<<endl;
    cout<<"the arr after te reverse is :  "<<endl;
    reversearr(arr,6);
    arrprnt(arr,6);

    return 0;
}