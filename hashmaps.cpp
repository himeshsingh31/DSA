#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    map<string,int>kills;
pair<string,int> friend1 = make_pair("himesh",0);
kills.insert(friend1);

pair<string,int> friend2("daulat",3);
kills.insert(friend2);

kills["arihant"] = 7;


cout<<kills["daulat"]<<endl;


}