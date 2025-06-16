#include <iostream>
#include <vector>
using namespace std;
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int neighbor : adj[node])
        if (!visited[neighbor]) dfs(neighbor, adj, visited);
}
int main() {
    int n = 4;
    vector<vector<int>> adj(n);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0};
    adj[3] = {1};
    vector<bool> visited(n, false);
    dfs(0, adj, visited);
    return 0;
}