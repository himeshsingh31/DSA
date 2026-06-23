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

        while (size > 0)
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
        int largest = 1;
        while (largest < size)
        {
      
            int child = largest/2;
      int rightchild =(largest /2) +1;
            if (arr[largest] < arr[child] && child <= size)
            {swap(arr[largest],arr[child]);
                largest = child;

            }
            if (arr[largest] < arr[rightchild] && rightchild<= size)
            {swap(arr[largest], arr[rightchild]);
                largest = child + 1;
            }

        }

        return;
        
    }

    void printer(){
        int x = sizeof(arr)/sizeof(int);
        int i =1;
        while(i<=x){
            cout <<arr[i]<<"- -";
            i++;
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

    h.printer();

    return 0;
}