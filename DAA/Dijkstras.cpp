#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

// Dijkstra's Algorithm using adjacency list of vectors
vector<int> dijkstra(int v, vector<vector<int>> adj[], int s) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int> dist(v, 1e9);

    dist[s] = 0;
    pq.push({0, s});

    while (!pq.empty()) {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto& it : adj[node]) {
            int adjnode = it[0];
            int edgeweight = it[1];

            if (dis + edgeweight < dist[adjnode]) {
                dist[adjnode] = dis + edgeweight;
                pq.push({dist[adjnode], adjnode});
            }
        }
    }

    return dist;
}

int main() {
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    vector<vector<int>> adj[v];

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < e; ++i) {
        int u, v_, w;
        cin >> u >> v_ >> w;
        adj[u].push_back({v_, w});
        // For undirected graph, also add: adj[v_].push_back({u, w});
    }

    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    vector<int> result = dijkstra(v, adj, source);

    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < v; ++i) {
        if (result[i] == 1e9)
            cout << "To " << i << ": Unreachable\n";
        else
            cout << "To " << i << ": " << result[i] << '\n';
    }

    return 0;
}
