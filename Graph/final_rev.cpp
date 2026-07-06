#include<bits//stdc++.h>
using namespace std;

/// BFS TRAVERSAL for graph

void bfs(vector<int>& ans, unordered_map<int, bool>& visited, int node, vector<vector<int>> adj2) {

    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty()) {

        int x = q.front();
        q.pop();
        ans.push_back(x);

        for (auto i : adj2[x]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>>& adj) {
    // Write your code here.
    int m = adj.size();
    unordered_map<int, list<int>> adj2;
    unordered_map<int, bool> visited;
    vector<int> ans;

    bfs(ans, visited, 0, adj);

    return ans;
}

/// DFS TRAVERSAL FOR GRAPH ...

void dfs(int node, vector<bool>& visited, unordered_map<int, list<int>>& adj, vector<int>& ans) {
    visited[node] = true;
    ans.push_back(node);

    for (auto i : adj[node]) {
        if (!visited[i]) {
            dfs(i, visited, adj, ans);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>>& edges) {
    // Write your code here
    unordered_map<int, list<int>> adj;
    vector<vector<int>> ans2;
    vector<bool> visited(V, false);

    for (int i = 0; i < E; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> ans;
            dfs(i, visited, adj, ans);
            ans2.push_back(ans);
        }
    }

    return ans2;
}



/// CYCLE DETECTION IN UNDIRECTED GRAPH BY BFS ...

bool bfs(int node, vector<int>& parent, unordered_map<int, list<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    queue<int> q;
    q.push(node);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto i : adj[node]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = 1;
                parent[i] = node;
            }

            else if (visited[i] && parent[node] != i) {
                return true;
            }
        }
    }

    return false;
}

string cycleDetection(vector<vector<int>>& edges, int n, int m) {
    // Write your code here.
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> parent(n + 1, -1);
    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            bool x = bfs(i, parent, adj, visited);

            if (x == true) {
                return "Yes";
            }
        }
    }

    return "No";
}



/// CYCLE DETECTION IN UNDIRECTED GRAPH BY DFS ...

bool dfs(int node,int paren,vector<int>&parent,unordered_map<int,list<int>>&adj,vector<bool>&visited){
visited[node] = true;
parent[node] = paren;
for(auto i:adj[node]){
    if(!visited[i]){
        bool x =dfs(i,node,parent,adj,visited);
    if(x == true){
return true;
    }
    }
    else if(visited[i] && parent[node]!= i){
        return true;
    }
}
return false;
}




/// CYCLE DETECTION IN DIRECTED GRAPH BY DFS ...


/// TOPOLOGICAL SORT BY DFS ..


/// TOPOLOGICAL SORT BY BFS (KAHN'S ALGORITHM)



///CYCLE DETECTION IN DIRECTED GRAPH BY BFS (KAHN'S ALGORITHM)
