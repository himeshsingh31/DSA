// this code show the sum of two binary numbers setbits.
#include <iostream>
using namespace std;
int setbita();
int setbitb();
int setbitb(int y)
{
      int answer = 0;
    int i;
    for (i = 0; i < 32; i++)
    {
        if (y & 1)
            answer = answer + 1;
       y = y >> 1;
    }
    return answer;
}
int setbita(int x)
{
    int answer = 0;
    int i;
    for (i = 0; i < 32; i++)
    {
        if (x & 1)
            answer = answer + 1;
       x= x >> 1;
    }
    return answer;

}
int main()
{
    int a, b;
    cout << "please enter two numners to see the total setbits!" << endl;
    cin >> a;
    cin >> b;
    cout << setbita(a) + setbitb(b) << endl;
    return 0;
}