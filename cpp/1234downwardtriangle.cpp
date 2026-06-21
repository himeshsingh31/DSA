#include <iostream>
using namespace std;

int main() {
   int row;
   int column;
cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;
int **arr = new int*[row];

for(int i=0;i<row;i++){
   arr[i]= new int [column];
}

cout<<sizeof(arr)<<endl;
for(int i=0;i<row;i++){
   delete [] arr[i];
}

delete [] arr;
    return 0;
}