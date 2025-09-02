#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> bfsTraversal(const int n, vector<pair<int, int> > &edges, const int start) {
    vector<vector<int> > adj(n);
    for (const auto& [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> traversal;
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int front = q.front();
        q.pop();
        traversal.push_back(front);

        for (int neighbour : adj[front]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

    return traversal;
}

int main() {
    int n = 5;
    vector<pair<int, int> > edges = {
        {0, 1}, {0, 2}, {1, 3}, {2, 4}
    };

    int start = 0;
    vector<int> bfstraversal = bfsTraversal(n, edges, start);

    for (auto node : bfstraversal) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}