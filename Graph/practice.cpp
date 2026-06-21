#include<stdio.h>
#include<iostream>
#include<map>
#include<list>
#include<unordered_map>
using namespace std;
template <typename T>


class graph{
public:
map<T,list<T>>x;

void insertion(T node,T to,bool direction){

    x[node].push_back(to);
    if(direction == 0){
x[to].push_back(node);
    }

}


void printer(){

for (auto i:x){
cout<<i.first<<"-->";

for(auto j:i.second){
    cout<<j<<",";
}

cout<<endl;

}

}


};

int main(){
graph <int>p;

int nodes;
int edges;
cout<<"please enter the numbers of edges: "<<endl;
cin>>edges;

cout<<"please enter the number of nodes"<<endl;
cin>>nodes;

for(int x =1;x<=edges;x++){
int z,q;
    cin>>z>>q;
    p.insertion(z,q,0);
}

p.printer();
return 0;


}