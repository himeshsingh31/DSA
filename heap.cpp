#include <stdio.h>
#include <iostream>

using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
    }

    // insertion at heap.

    void insertion(int x)
    {
        size = size + 1;
        int largest = size;
        arr[largest] = x;
        while (largest > 1)
        {
            int parent = largest / 2;

            if (arr[largest] < arr[parent])
            {
                swap(arr[largest], arr[parent]);
                largest = parent;
            }
            else
            {
                return;
            }
        }
    }

    // deletion of  root node in heap.
    void remover()
    {
        int root = 1;
        swap(arr[root], arr[size]);
        size--;

        while (root < size)
        {
            int left = root * 2;
            int right = root * 2 + 1;
            int base = root;
            if (left <= size && arr[root] > arr[left])
            {
                swap(arr[root], arr[left]);
                root = left;
            }
            else if (right <= size && arr[root] > arr[right])
            {
                swap(arr[root], arr[right]);
                root = right;
            }

            else
            {
                return;
            }
        }
    }

    // heapify.
  

    // sorting.
    void sorting(){
        int x= size;
        while(x>1){
            swap(arr[1],arr[x]);
            x--;
            setting(arr,1,x);
        }
    }
};
  void setting(int arr[],int iter,int size)
    {

        while (iter < size)
        {
            int left = iter * 2;
            int right = iter * 2 + 1;
            if (left <= size && arr[iter] > arr[left])
            {
                swap(arr[iter], arr[left]);
                iter = left;
            }
            else if (right <= size && arr[iter] > arr[right])
            {
                swap(arr[iter], arr[right]);
                iter = right;
            }

            else
            {
                return;
            }
        }
    }

    void heapify(int arr[],int size)
    {
        int iter = size / 2;

        while (iter > 0)
        {
            setting(arr,iter,size);
            iter--;
        }
    }
int main()
{heap h;
    int arr2[]={-1,9,8,7,6,5,4,3,2,1};
    h.insertion(90);
    h.insertion(80);
    h.insertion(70);
    h.insertion(60);
    h.insertion(40);
    h.insertion(50);
    h.insertion(30);
    h.insertion(20);
    h.insertion(10);
    heapify(arr2,9);
    
    cout << endl;
    h.sorting();
 
}