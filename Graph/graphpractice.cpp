#include <stdio.h>
#include<iostream>
#include <unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph
{
public:
    unordered_map<T, list<T> >adj;
    void graphmaker(T node,  T point_to, bool direction)
    {
        // direction ==0 -->unidirectional
        // direction ==1 --> bidirectional
        adj[node].push_back(point_to);
        if (direction == 0)
        {
            adj[point_to].push_back(node);
        }
    }

    void printgraph(){
        for(auto i:adj){

            cout<<i.first<<"-->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int m;

    cout<<"enter the number of edges"<<endl;
    cin>>m;
    graph<int> g;

    for(int i=0;i<m;i++){
        int k;
        int j;
        cin>> k >>j;
        g.graphmaker(k,j,0);
    }

    g.printgraph();

    return 0;
}