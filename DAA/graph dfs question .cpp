#include<iostream>
#include<vector>
using namespace std;
bool dfscycle(int node, vector<vector<int>>& graph, vector<bool>& visited, vector<bool>& restack) {
    visited[node] = true;
    restack[node] = true;

    for (int i = 0; i < graph[node].size(); ++i) {
        int neighbor = graph[node][i];
        if (!visited[neighbor]) {
            if (dfscycle(neighbor, graph, visited, restack)) {
                return true;
            }
        } else if (restack[neighbor]) {
            return true;
        }
    }
    restack[node] = false;
    return false;
}

bool iscycle(int n, vector<vector<int>>& graph) {
    vector<bool> visited(n, false);
    vector<bool> restack(n, false);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (dfscycle(i, graph, visited, restack)) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n,e;
    cout<<"enter number of nodes and edges";
    cin>>n>>e;

    vector<vector<int>>graph(n);

    cout<<"enter edges:\n";
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u,v;
        graph[u].push_back(v);
    }

    if(iscycle(n,graph))
    {
        cout<<"cycle detected in the graph"<<endl;
    }
    else
    {
        cout<<"no cycle in the graph"<<endl;
    }
}
