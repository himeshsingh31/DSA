#include <iostream>
#include<array>
#include<string>
#include<cstring>
using namespace std;
int main() {
// char arr[10];
string arr;
getline(cin,arr,'/');// not for the char[] but for the string str;
cout<<arr.length()<<endl;



char app[10];
cin.getline(app,5,'?');
cout <<app<<endl;
cout<<strlen(app)<<endl;


cout<<arr.find(app)<<endl;
arr.erase(4,2);
cout<<arr[4];
    return 0;
}