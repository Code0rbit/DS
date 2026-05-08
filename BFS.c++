#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int nodes, edges;
    cout << "--- BFS PROGRAM ---" << endl;
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
    cout << "Enter the starting node for BFS: ";
    cin >> startNode;
    vector<bool> visited(nodes + 1, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;

    return 0;
}

