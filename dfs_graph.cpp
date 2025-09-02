#include<iostream>
#include<vector>

using namespace std;

void dfs(int start, vector<vector<int> >& adj, vector<bool>& visited) {
    visited[start] = true;
    cout << start << " ";
    for (auto neighbour : adj[start]) {
        if(!visited[neighbour]){
            dfs(neighbour, adj, visited);
        }
    }
}

int main() {
    int n = 5;
    vector<vector<int> > adj(n);

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    vector<bool> visited(n, false);
    cout << "DFS starting from node 0: ";
    dfs(0, adj, visited);
    cout << endl;
}