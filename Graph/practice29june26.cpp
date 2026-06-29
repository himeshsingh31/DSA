#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph
{

public:
    unordered_map<T, list<T>> adj;
    void setter(T a, T b, bool x)
    {
        adj[a].push_back(b);

        if (x == false)
        {
            adj[b].push_back(a);
        }
    }

    void printer()
    {
        for (auto i : adj)
        {
            cout << i.first << "-->";

            for (auto j : i.second)
            {
                cout << j << " ";
            }
        }
    }
};

int main()
{
    graph<int> p;
    cout << "please eneter the number of edges you want !" << endl;

    int edges;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int a;
        int b;
        cin >> a >> b;

        p.setter(a, b, 0);
    }

    p.printer();
}

//11:11
