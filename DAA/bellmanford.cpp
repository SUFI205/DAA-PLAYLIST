#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> bellmanford(int V, vector<vector<int>>& edges, int src) {
    vector<int> dist(V, 1e8);
    dist[src] = 0;

    for (int i = 0; i < V - 1; i++) {
        for (auto it : edges) {
            int u = it[0];
            int to = it[1];
            int wt = it[2];

            if (dist[u] != 1e8 && dist[u] + wt < dist[to]) {
                dist[to] = dist[u] + wt;
            }
        }
    }

    for (auto it : edges) {
        int u = it[0];
        int to = it[1];
        int wt = it[2];

        if (dist[u] != 1e8 && dist[u] + wt < dist[to]) {
            return {-1};
        }
    }

    return dist;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> edges;

    cout << "Enter edges (from to weight):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int src;
    cout << "Enter source vertex: ";
    cin >> src;

    vector<int> result = bellmanford(V, edges, src);

    if (result.size() == 1 && result[0] == -1) {
        cout << "Graph contains a negative weight cycle\n";
    } else {
        cout << "Vertex\tDistance from Source\n";
        for (int i = 0; i < V; i++) {
            if (result[i] == 1e8)
                cout << i << "\tINF\n";
            else
                cout << i << "\t" << result[i] << "\n";
        }
    }

    return 0;
}
