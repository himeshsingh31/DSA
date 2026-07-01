// # Breadth First Search (BFS) Traversal in Graph (C++)

// ## Code
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

// BFS Function
void bfs(vector<int>& ans, unordered_map<int, bool>& visited,
         vector<vector<int>>& adj, int node)
{
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        visited[x] = true;
        ans.push_back(x);

        for (auto i : adj[x])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

// BFS Traversal
vector<int> bfsTraversal(int n, vector<vector<int>>& adj)
{
    unordered_map<int, bool> visited;
    vector<int> ans;

    bfs(ans, visited, adj, 0);

    return ans;
}

int main()
{
    int n = 5;

    vector<vector<int>> adj(n);

    // Undirected Graph
    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);

    adj[2].push_back(0);
    adj[2].push_back(4);

    adj[3].push_back(1);

    adj[4].push_back(1);
    adj[4].push_back(2);

    vector<int> ans = bfsTraversal(n, adj);

    cout << "BFS Traversal: ";

    for (int node : ans)
    {
        cout << node << " ";
    }

    return 0;
}

// # Approach

// 1. Create a **visited** map to keep track of visited vertices.
// 2. Create a **queue** because BFS works in **FIFO (First In First Out)** order.
// 3. Push the starting node (0) into the queue.
// 4. Repeat until the queue becomes empty:
//    - Remove the front node.
//    - Store it in the answer vector.
//    - Visit all of its adjacent nodes.
//    - If an adjacent node has not been visited:
//      - Mark it visited.
//      - Push it into the queue.
// 5. Return the traversal order.

// ---

// # Dry Run

// ### Graph

// ```
// 0 ---- 1 ---- 3
// |      |
// |      |
// 2 ---- 4
// ```

// Adjacency List

// ```
// 0 -> {1,2}
// 1 -> {0,3,4}
// 2 -> {0,4}
// 3 -> {1}
// 4 -> {1,2}
// ```

// ### Initial State

// ```
// Queue = [0]
// Visited = {0}
// Answer = []
// ```

// ---

// ### Step 1

// Pop **0**

// ```
// Answer = [0]
// ```

// Neighbours:

// - 1 → Not visited → Push
// - 2 → Not visited → Push

// ```
// Queue = [1,2]
// Visited = {0,1,2}
// ```

// ---

// ### Step 2

// Pop **1**

// ```
// Answer = [0,1]
// ```

// Neighbours:

// - 0 → Already visited
// - 3 → Push
// - 4 → Push

// ```
// Queue = [2,3,4]
// Visited = {0,1,2,3,4}
// ```

// ---

// ### Step 3

// Pop **2**

// ```
// Answer = [0,1,2]
// ```

// Neighbours:

// - 0 → Already visited
// - 4 → Already visited

// ```
// Queue = [3,4]
// ```

// ---

// ### Step 4

// Pop **3**

// ```
// Answer = [0,1,2,3]
// ```

// Neighbour:

// - 1 → Already visited

// ```
// Queue = [4]
// ```

// ---

// ### Step 5

// Pop **4**

// ```
// Answer = [0,1,2,3,4]
// ```

// Neighbours:

// - 1 → Already visited
// - 2 → Already visited

// ```
// Queue = []
// ```

// Traversal Complete.

// ---

// # Time Complexity

// ### Visiting Vertices

// Each vertex is visited exactly once.

// ```
// O(V)
// ```

// ### Traversing Edges

// Every edge is explored exactly once (directed graph) or twice (undirected graph), which is still linear.

// ```
// O(E)
// ```

// ### Total Time Complexity

// ```
// O(V + E)
// ```

// where

// - **V** = Number of Vertices
// - **E** = Number of Edges

// ---

// # Space Complexity

// ### Queue

// In the worst case, the queue can contain all vertices.

// ```
// O(V)
// ```

// ### Visited Map

// Stores one entry for each vertex.

// ```
// O(V)
// ```

// ### Answer Vector

// Stores all vertices.

// ```
// O(V)
// ```

// ### Total Space Complexity

// ```
// O(V)
// ```

// ---

// # Why is `visited[i] = true` done before pushing into the queue?

// ```cpp
// if(!visited[i])
// {
//     visited[i] = true;
//     q.push(i);
// }
// ```

// This prevents the same node from being inserted into the queue multiple times.

// Example:

// ```
// 0
// |\
// | \
// 1--2
// ```

// If we mark a node as visited **after popping**, then node `2` could be pushed by both `0` and `1`, causing duplicate processing.

// Marking it visited **before pushing** ensures every node enters the queue only once.

// ---

// # Key Points

// - Uses **Queue (FIFO)**.
// - Visits nodes **level by level**.
// - Guarantees the **shortest path** in an unweighted graph.
// - Every vertex is visited only once.
// - Time Complexity: **O(V + E)**.
// - Space Complexity: **O(V)**.