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
        int largest = size;
        arr[size] = data;

        while (size > 0)
        {
            // for max heap
            int parent = largest / 2;
            if (arr[size / 2] < arr[size])
            {
                swap(arr[size], arr[size / 2]);
                largest = parent;
            }
            else
                return;
        }
    }
};

int main()
{
    heap h;

    h.maker(10);
    h.maker(20);
    h.maker(30);
    h.maker(40);
    h.maker(50);
    h.maker(60);

    return 0;
}