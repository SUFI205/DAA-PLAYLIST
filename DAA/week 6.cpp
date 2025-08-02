///q2)
#include <iostream>
#include <queue>
using namespace std;

void bfs(int N, int graph[100][100], int start) {
    bool visited[100] = {false};
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i = 0; i < N; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter number of vertices: ";
    cin >> N;

    int graph[100][100];
    cout << "Enter adjacency matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    bfs(N, graph, start);

    return 0;
}
///q3

//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//bool isBipartite(vector<vector<int>>& graph, int vertex) {
//    vector<int> color(vertex, -1); // -1 means uncolored
//
//    for (int start = 0; start < vertex; start++) {
//        if (color[start] == -1) { // Not yet colored, start BFS
//            queue<int> q;
//            q.push(start);
//            color[start] = 0; // Start coloring with 0
//
//            while (!q.empty()) {
//                int u = q.front();
//                q.pop();
//
//                for (int v = 0; v < vertex; v++) {
//                    if (graph[u][v]) { // If edge exists
//                        if (color[v] == -1) {
//                            color[v] = 1 - color[u]; // Assign opposite color
//                            q.push(v);
//                        } else if (color[v] == color[u]) {
//                            return false; // Conflict found
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return true;
//}
//
//int main() {
//    int vertex;
//    cout << "Enter number of vertices: ";
//    cin >> vertex;
//
//    vector<vector<int>> graph(vertex, vector<int>(vertex));
//
//    cout << "Enter adjacency matrix:\n";
//    for (int i = 0; i < vertex; i++) {
//        for (int j = 0; j < vertex; j++) {
//            cin >> graph[i][j];
//        }
//    }
//
//    if (isBipartite(graph, vertex))
//        cout << "The graph is Bipartite.\n";
//    else
//        cout << "The graph is NOT Bipartite.\n";
//
//    return 0;
//}
///q1)

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool dfs(int N, int graph[100][100], int start,int destination) {
    bool visited[100] = {false};
    stack<int> st;

    visited[start] = true;
    st.push(start);

    cout << "DFS Traversal: ";
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        cout << node << " ";

        if(node==destination)
            return true;

        for (int i = 0; i < N; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                st.push(i);
            }
        }
    }
    cout << endl;
    return false
}

int main() {
    int N;
    cout << "Enter number of vertices: ";
    cin >> N;

    int graph[100][100];
    cout << "Enter adjacency matrix: \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    int destination;
    cout<<"enter the destination";
    cin>>destination;

    dfs(N, graph, start ,destination);

    return 0;
}






