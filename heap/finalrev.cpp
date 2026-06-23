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

    void maker(int data)
    {
        size += 1;
        int child = size;
        arr[size] = data;

        while (child > 1)
        {
            // for max heap
            int parent = child / 2;
            if (arr[parent] < arr[child])
            {
                swap(arr[parent], arr[child]);
                child = parent;
            }
            else
                break;
        }
    }

    void deleter()
    {
        // for max heap
        swap(arr[1], arr[size]);
        size -= 1;
        int parent= 1;
        while (parent < size)
        {
int largest = parent;
            int child = parent* 2;
            int rightchild = (parent * 2) + 1;
            if (child <= size && arr[largest] < arr[child])
            {
                largest = child;
            }
            if (rightchild <= size && arr[largest] < arr[rightchild])
            {
                largest = rightchild;
            }

            if(largest==parent)
            break;


            swap(arr[largest],arr[parent]);
            parent = largest;
        }

        return;
    }

    void printer()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << ' ';
        }
    }
};

void setter(int starting, int *arr, int size)
{
    while (starting < size)
    {
        int leftchild = starting * 2;
        int rightchild = starting * 2 + 1;
int largest = starting;
        if (leftchild < size && arr[leftchild] > arr[largest])
        {
            
            largest = leftchild;
        }

        if(rightchild<size && arr[rightchild] > arr[largest]){
            
        largest = rightchild;
        }
        
        if(largest==starting)
        break;


        swap(arr[largest],arr[starting]);
        starting = largest;

    }
}

void heapify(int* arr, int size)
{
for(int i=size;i>=1;i++){
    arr[i] = arr[i-1];
}
arr[0] = -1;


    int starting = size / 2;
    while (starting > 0)
    {
        setter(starting, arr, size+1);
        starting--;
    }
}

int main()
{
    heap h;
    h.maker(10);
    h.maker(20);
    h.maker(30);
    h.maker(40);
    h.maker(50);
    h.maker(60);

    h.printer();

    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    heapify(arr, 15);
    return 0;
}