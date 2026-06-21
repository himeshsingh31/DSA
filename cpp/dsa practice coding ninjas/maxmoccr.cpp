#include <iostream>
using namespace std;
int maxmoccr(string arr){
    int i,j;
    int maxm=-1;
    for ( i = 0; i < arr.size()-1; i++)
    {
    int temp=1;
    for ( j = 0; j < arr.size(); j++)
    {
        if (arr[i]==arr[j])
        {
            temp++;
            arr[j]=-8877;
        }
        if (temp>maxm)
        {
            maxm=temp;
        }
        
        
    }
    
}
return maxm;
}
int main() {
  cout<<"please enter the string you want to see the maxm occr"<<endl;
  string arr;
  getline(cin,arr);
  cout<<"the string yo enter is : "<<arr<<endl;

cout<<"and the reverse of that string is : "<<maxmoccr(arr)<<endl;
    return 0;
}