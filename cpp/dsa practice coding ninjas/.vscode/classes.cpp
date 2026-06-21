#include <iostream>
#include<array>
#include<vector>
#include<string>
using namespace std;
bool checkpalindrome(string arr){
    int s=0;
    int e= arr.size()-1;
    while (s<e)
    {
        if (arr[s]==arr[e])
        {
            s++;
            e++;
            return true;
        }
        else{
            return false;
        }
        
    }
    
}
int main() {
string arr;
cout<<"please enter the text you want to check the palindrome"<<endl;
getline(cin,arr);

if(checkpalindrome(arr)){
    cout<<"the text is palindrome"<<endl;
}
else{
    cout<<"the text is not palindrome"<<endl;
}


 
    return 0; 
}