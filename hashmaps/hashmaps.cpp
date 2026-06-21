#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

// unordered_map<string,int> bodycount;
map<string,int> bodycount;


pair<string,int> friend1= make_pair("rohit",2);
bodycount.insert(friend1);

pair<string,int> friend2("himesh", 0);
bodycount.insert(friend2);

bodycount["daulat"] = 7;
bodycount["daulat"] = 6;
//hashmaps updates the data , not makes the new place for the same data.

// cout<<bodycount["daulat"]<<endl;


// cout<<bodycount.count("daulat")<<endl;
// bodycount.erase("daulat");

// cout<<bodycount.at("unknown")<<endl;//it will cerate a panic but not after the line no 28 , it will not create a panic.
// cout<<bodycount["unknown"]<<endl;
// cout<<bodycount.at("unknown")<<endl;



// for(auto i:bodycount){
// cout<<i.first<<"   "<<i.second<<endl;
// }
// cout<<endl; 


// iterator
map<string,int>:: iterator ans = bodycount.begin();

while(ans!= bodycount.end()){
    cout<<ans->first<<endl;
    ans++;
}




}
