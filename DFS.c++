#include <iostream>
#include <vector>

using namespace std;
void dfs(int curr, const vector<vector<int>>& adj, vector<bool>& visited) {
    visited[curr] = true;
    cout << curr << " ";

    for (int neighbor : adj[curr]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int nodes, edges;
    cout << "--- DFS PROGRAM ---" << endl;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;

    
    vector<vector<int>> adj(nodes + 1);
    cout << "Enter " << edges << " edges (format: u v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int startNode;
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;

    
    vector<bool> visited(nodes + 1, false);
    cout << "DFS Traversal: ";
    dfs(startNode, adj, visited);
    cout << endl;

    return 0;
}

