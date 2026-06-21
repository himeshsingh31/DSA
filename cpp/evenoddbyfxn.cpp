#include <iostream>
using namespace std;
bool evenodd(int a)
{
    if (a & 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int b;
    cout << "please enter the value !" << endl;
    cin >> b;
    if (evenodd(b))
    {
        cout << "the number is odd! "<<endl;
    }
    else{
        cout<<"the number is even!"<<endl;
    }
    return 0;
}