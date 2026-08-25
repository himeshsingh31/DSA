#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    void adder(int x, int y, int wei)
    {
        adj[x].push_back({y, wei});
    }

    void printer()
    {

        for (auto i : adj)
        {
            cout << i.first << "-->";

            for (auto j : i.second)
            {

                cout << "(" << j.first << "," << j.second << ")";
            }
            cout << endl;
        }
    }

    void topo(int src, stack<int> &s, vector<bool> &visited)
    {
        int x = src;
visited[src] =true;
        for (auto i : adj[src])
        {
            if (visited[i.first] == 0)
            {
                topo(i.first, s, visited);
            }
        }
        s.push(x);
    }

    void shortest(int v, int src, unordered_map<int, int> &dist)
    {
        stack<int> s;
        vector<bool> visited(6, false);
  

for(int i=0;i<v;i++){
    if(visited[i] ==0){
        topo(src,s,visited);
    }
}


        dist[src] = 0;

        while (!s.empty())
        {
            int a = s.top();
            s.pop();

            for (auto i : adj[a])
            {

                if (i.second + dist[a] < dist[i.first])
                {
                    dist[i.first] = i.second + dist[a];
                }
            }
        }
    }
};

int main()
{
    graph g;

    g.adder(0, 1, 5);
    g.adder(0, 2, 3);
    g.adder(1, 3, 6);
    g.adder(1, 2, 2);
    g.adder(2, 4, 4);
    g.adder(2, 5, 2);
    g.adder(2, 3, 7);
    g.adder(3, 5, 1);
    g.adder(3, 4, -1);
    g.adder(4, 5, -2);

    int src = 1;
    int v = 6;

    unordered_map<int, int> dist;
    for (int i = 0; i < v; i++)
    {
        dist[i] = INT_MAX;
    }

    g.shortest(v, src, dist);

    for (int i = 0; i < v; i++)
    {

        if (dist[i] == INT_MAX)
        {
            cout << "INF" << " ";
        }
        else
            cout << dist[i] << "  ";
    }
}
