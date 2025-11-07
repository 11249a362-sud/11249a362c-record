#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>> &adj, int start, int V) {
    vector<bool> visited(V, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    cout << "BFS: ";
    while (!q.empty()) {
        int v = q.front(); q.pop();
        cout << v << " ";
        for (int u : adj[v])
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
    }
}

void DFSUtil(int v, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[v] = true;
    cout << v << " ";
    for (int u : adj[v])
        if (!visited[u])
            DFSUtil(u, adj, visited);
}

void DFS(vector<vector<int>> &adj, int V) {
    vector<bool> visited(V, false);
    cout << "\nDFS: ";
    for (int i = 0; i < V; i++)
        if (!visited[i])
            DFSUtil(i, adj, visited);
}

int main() {
    int V = 4;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 3};
    adj[3] = {1, 2};

    BFS(adj, 0, V);
    DFS(adj, V);
}
