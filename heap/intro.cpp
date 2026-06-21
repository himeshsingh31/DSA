#include <iostream>
#include <stdio.h>

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

    void insertatheap(int data)
    {
        size = size + 1;
        int largest = size;
        arr[size] = data;

        while (largest > 1)
        {
            int parent = largest / 2;

            if (arr[parent] < arr[largest]) // max heap...
            {
                swap(arr[parent], arr[largest]);
                largest = parent;
            }

            else
            {
                return;
            }
        }
    }

    void setting(int arr[], int size, int starting)
    {
        int index = starting;

        int left = index * 2;
        int right = index * 2 + 1;

        if (left <= size && arr[index] > arr[left])
        {
            index = left;
        }
        if (right <= size && arr[index] > arr[right])
        {
            index = right;
        }

        if (index != starting)
        {
            swap(arr[index], arr[starting]);
            setting(arr, size, index);
        }
    }

    void heapify(int size)
    {

        int starting = size / 2;

        while (starting > 0)
        {
            setting(arr, size, starting);
            starting--;
        }
    }

    void printheap(int size)
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void heapsort(int size)
    {
        int i = size;
        while (i > 1)
        {
            swap(arr[i], arr[1]);
            setting(arr, i - 1, 1);
            i--;
        }
    }
};
int main()
{
    heap h;
    // int arr2[] = {-1,10,22,14,45,60,20,61,70,90};
    // 60, 10, 45, 70, 20, 66, 22, 14, 90
    // 90,61,70,60,14,20,45,10,22
    // 10,22,14,45,60,20,61,70,90
    h.insertatheap(10);
    h.insertatheap(20);
    h.insertatheap(30);
    h.insertatheap(40);
    h.insertatheap(50);
    h.insertatheap(60);
    h.insertatheap(70);
    h.insertatheap(80);
    h.insertatheap(90);
    h.heapify(9);
    h.printheap(9);
    cout << endl;
    h.heapsort(9);
    h.printheap(9);
}
