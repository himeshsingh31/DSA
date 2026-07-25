//// BFS TRAVERSAL for graph

#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> &ans, unordered_map<int, bool> &visited, int node, vector<vector<int>> adj2)
{

    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {

        int x = q.front();
        q.pop();
        ans.push_back(x);

        for (auto i : adj2[x])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    // Write your code here
    int m = adj.size();
    unordered_map<int, list<int>> adj2;
    unordered_map<int, bool> visited;
    vector<int> ans;

    bfs(ans, visited, 0, adj);

    return ans;
}//////






/// DFS TRAVERSAL FOR GRAPH ...

void dfs(int node, vector<bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &ans)
{
    visited[node] = true;
    ans.push_back(node);

    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, ans);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int, list<int>> adj;
    vector<vector<int>> ans2;
    vector<bool> visited(V, false);

    for (int i = 0; i < E; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> ans;
            dfs(i, visited, adj, ans);
            ans2.push_back(ans);
        }
    }

    return ans2;
}//////






/// CYCLE DETECTION IN UNDIRECTED GRAPH BY BFS ...

bool bfs(int node, vector<int> &parent, unordered_map<int, list<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
                parent[i] = node;
            }

            else if (visited[i] && parent[node] != i)
            {
                return true;
            }
        }
    }

    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // Write your code here.
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> parent(n + 1, -1);
    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool x = bfs(i, parent, adj, visited);

            if (x == true)
            {
                return "Yes";
            }
        }
    }

    return "No";
}///////////







/// CYCLE DETECTION IN UNDIRECTED GRAPH BY DFS ...

bool dfs(int node, int paren, vector<int> &parent, unordered_map<int, list<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;
    parent[node] = paren;
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            bool x = dfs(i, node, parent, adj, visited);
            if (x == true)
            {
                return true;
            }
        }
        else if (visited[i] && parent[node] != i)
        {
            return true;
        }
    }
    return false;
}///////////////








/// CYCLE DETECTION IN DIRECTED GRAPH BY DFS ...
#include <bits //stdc++.h>
bool dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfstr, unordered_map<int, list<int>> &adj)
{
    visited[node] = 1;
    dfstr[node] = 1;

    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            bool x = dfs(i, visited, dfstr, adj);
            if (x == true)
            {
                return true;
            }
        }
        else if (dfstr[i] == 1)
        {
            return true;
        }
    }
    dfstr[node] = 0;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfstr;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bool x = dfs(i, visited, dfstr, adj);
            if (x == true)
            {
                return true;
            }
        }
    }

    return false;
}////////////////









/// TOPOLOGICAL SORT BY DFS ..

void dfs(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;

    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, s, adj);
        }
    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // Write your code here
    unordered_map<int, list<int>> adj;
    vector<bool> visited(v, false);
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
    stack<int> s;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            dfs(i, visited, s, adj);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}//////







/// TOPOLOGICAL SORT BY BFS (KAHN'S ALGORITHM)
#include <bits/stdc++.h>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // Write your code here
    unordered_map<int, list<int>> adj;
    vector<int> indegree(v, 0);

    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        indegree[v]++;
    }
    queue<int> q;

    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> ans;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        ans.push_back(x);
        for (auto i : adj[x])
        {
            indegree[i]--;
            if (indegree[i] == 0)
                q.push(i);
        }
    }

    return ans;
}/////////






/// CYCLE DETECTION IN DIRECTED GRAPH BY BFS (KAHN'S ALGORITHM)
#include <bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    unordered_map<int, list<int>> adj;
    vector<int> indegree(n + 1, 0);
    vector<int> ans;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        indegree[v]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        ans.push_back(x);
        for (auto i : adj[x])
        {
            indegree[i]--;
            if (indegree[i] == 0)
                q.push(i);
        }
    }

    int count = ans.size();

    if (count == n)
        return false;

    return true;
}////




/// shortest path finder in the unweighted undirectional graph.. 
https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
class Solution
{
public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest)
    {
        // code here
        vector<bool> visited(V, false);
        vector<int> parent(V, -1);
        queue<int> q;
        q.push(src);

        unordered_map<int, list<int>> adj;

        for (int i = 0; i < edges.size(); i++)
        {
            int x = edges[i][0];
            int y = edges[i][1];

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        visited[src] = 1;
        while (!q.empty())
        {
            int x = q.front();
            q.pop();

            for (auto i : adj[x])
                if (visited[i] == 0)
                {
                    q.push(i);
                    parent[i] = x;
                    visited[i] = true;
                }
        }

        vector<int> ans;

        int des = dest;

        while (des != src)
        {
            if (des == -1)
            {
                return -1;
            }
            else
            {
                ans.push_back(des);
                des = parent[des];
            }
        }

        ans.push_back(src);

        int p = ans.size() - 1;
        return p;
    }
};





/////***shortest path in the DIRECTED ACYCLIC WEIGHTED GRAPH USING DFS*****
#include <bits/stdc++.h>

using namespace std;

class graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void edges(int u, int v, int w)
    {
        pair<int, int> x = make_pair(v, w);
        adj[u].push_back(x);
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

    // create a topological sort first...
    void dfs(unordered_map<int, bool> &visited, int x, stack<int> &s)
    {
        visited[x] = 1;

        for (auto i : adj[x])
        {
            if (visited[i.first] != 1)
            {
                dfs(visited, i.first, s);
            }
        }
        s.push(x);
    }

    // DAG path finder

    void dagfinder(int n, int src, stack<int> &s, vector<int> &dist)
    {

        dist[src] = 0;

        while (!s.empty())
        {
            int top = s.top();
            s.pop();

            if (dist[top] != INT_MAX)
            {
                for (auto i : adj[top])
                {
                    if (dist[top] + i.second < dist[i.first])
                    {
                        dist[i.first] = dist[top] + i.second;
                    }
                }
            }

          
        }
    }
};

int main()
{
    graph g;

    g.edges(0, 1, 5);
    g.edges(0, 2, 3);
    g.edges(1, 2, 2);
    g.edges(1, 3, 6);
    g.edges(2, 3, 7);
    g.edges(2, 4, 4);
    g.edges(2, 5, 2);
    g.edges(3, 4, -1);
    g.edges(4, 5, -2);

    g.printer();
    int n = 6;

    unordered_map<int, bool> visited;
    stack<int> s;
    int src = 1;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            g.dfs(visited, i, s);
        }
    }

    vector<int> dist(n);

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    g.dagfinder(n, src, s, dist);

    for (int i = 0; i < n; i++)
    {
        if(dist[i] == INT_MAX){
            cout<<"INF"<<"  ";
        }
        else 
        cout << dist[i] << "  ";
    }

    return 0;
}/////







/////*****THE DIJKISTRA'S ALGORITHM******

#include <bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    // Write your code here.

    unordered_map<int, list<pair<int, int>>> adj;

    for (int i = 0; i < edges; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    set<pair<int, int>> s;

    vector<int> dist(vertices, INT_MAX);

    dist[source] = 0;
    s.insert(make_pair(0, source));

    while (!s.empty())
    {
        pair<int, int> top = *(s.begin());
        s.erase(top);
        int node_distance = top.first;
        int top_node = top.second;

        for (auto i : adj[top_node])
        {
            if (node_distance + i.second < dist[i.first])
            {
                auto checker = s.find(make_pair(i.second, i.first));
                if (checker != s.end())
                {
                    s.erase(checker);
                }

                dist[i.first] = node_distance + i.second;
                s.insert(make_pair(dist[i.first], i.first));
            }
        }
    }

    return dist;
}//////////




//////*******PRIMS ALGORITHM***
#include <bits/stdc++.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here

    vector<int> key(n + 1, INT_MAX);
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1);

    unordered_map<int, list<pair<int, int>>> adj;

    for (int i = 0; i < m; i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int dis = g[i].second;

        adj[u].push_back({v, dis});
        adj[v].push_back({u, dis});
    }

    key[1] = 0;
    parent[1] = -1;

    for (int i = 1; i < n; i++)
    {
        int u;
        int mini = INT_MAX;
        for (int j = 1; j <= n; j++)
        {
            if (visited[j] == false && key[j] < mini)
            {
                u = j;
                mini = key[j];
            }
        }

        visited[u] = true;

        for (auto k : adj[u])
        {
            if (visited[k.first] == false && k.second < key[k.first])
            {
                parent[k.first] = u;
                key[k.first] = k.second;
            }
        }
    }

    vector<pair<pair<int, int>, int>> ans;

    for (int i = 2; i < parent.size(); i++)
        ans.push_back({{parent[i], i}, key[i]});

    return ans;
}



