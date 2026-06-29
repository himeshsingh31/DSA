#include <iostream>
#include <list>
#include<unordered_map>
using namespace std;
template <typename T>

class graph
{
public:
    unordered_map<T, list<T>> adj;

    void creatr(T u, T v, bool x)
    {

        adj[u].push_back(v);
        if (x == 0)
            adj[v].push_back(u);
    }

void printer(){

for(auto i:adj){
    cout<<i.first<<"->";

    for(auto j:i.second)
    cout<<j<<",";

}
cout<<endl;

}

};

int main()
{
    graph<int> p;

    cout<<"enter the number of edges oyu wnat to see !"<<endl;
    int edges ;
    cin>>edges;


    for(int i =0 ; i<edges;i++){
int a;
int b;

cin>>a>>b;
p.creatr(a,b,0);

    }


    p.printer();
}
//17:44