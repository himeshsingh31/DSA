#include<iostream>
#include<map>
#include<list>
using namespace std;

class graph{
public:
map<int ,list<int>>adj;

void settr(int u,int v,bool x){
adj[u].push_back(v);
if(x==false){
    adj[v].push_back(u);
}
}

void printer(){
for(auto i:adj ){
cout<<i.first<<"-->";
for(auto j:i.second){
    cout<<j<<" ";
}
cout<<endl;
}
}

};

int main(){
int u;
int v ;


cout<<"enter the number of edges you want to see"<<endl;
int edges;
cin>>edges;
graph p;
for(int i=0;i<edges;i++){
    cin>>u>>v;
    p.settr(u,v,0);
}

p.printer();
return 0;
}

//7:10