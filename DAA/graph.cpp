#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

/////topological sort
///// Topological Sort using DFS
//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//void topologicalsortutils(vector<int>graph[],bool visited[],stack<int>&st,int i)
//{
//    visited[i]=true;
//    for(int j=0;j<graph[i].size();j++)
//    {
//        if(!visited[graph[i][j]])
//        {
//            topologicalsortutils(graph,visited,st,i);
//        }
//    }
//    st.push(i);
//}
//
//void topologicalsort(vector<int>graph[],int v)
//{
//    bool visited[v];
//    stack<int>st;
//
//    for(int i=0;i<v;i++)
//    {
//        visited[i]=false;
//    }
//
//    for(int i=0;i<v;i++)
//    {
//        if(!visited[i])
//        {
//            topologicalsortutils(graph, visited, st, i);
//        }
//    }
//
//    while(!st.empty())
//    {
//        cout<<st.top()<<" ";
//        st.pop();
//    }
//}
//
//i0000000()
//{
//    int v, e, s, d;
//    cin >> v >> e;
//0   vector<int> graph[v];
//
//    for (int i = 0; i < e; i++)
//    {
//        cin >> s >> d;
//        graph[s].push_back(d);// directed edge from s to d
//    }
//
//    topologicalsort(graph, v);
//    return 0;
//}



///topological sort using BFS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void topologicalsort(vector<int>graph[],int v)
{
    vector<int>indegree(v,0);

    ///compute in-degree of each node
    for(int i=0;i<v;i++)
    {
       for(int j=0;j<graph[i].size();j++)
       {
           int neighbor=graph[i][j];
           indegree[neighbor]++;
       }
    }


    ///push all node with in degree 0 into queue
    queue<int>q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }

    ///process node
    vector<int>toporder;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        toporder.push_back(node);

        ///decrease in degree of all adjacent nodes
        for(int j=0;j<graph[node].size();j++)
        {
            int neighbour=graph[node][j];
            indegree[neighbour]--;
            if(indegree[neighbour]==0)
            {
                q.push(neighbour);
            }
        }
    }

    ///check for cycle
    if(toporder.size()!=v)
    {
        cout<<"cycle detected";
        return;
    }

    ///print topological order
    for(int i=0;i<toporder.size();i++)
    {
        cout<<toporder[i]<<" ";
    }
    cout<<endl;
}
//int main()
//{
//    int v,e,s,d;
//    cin>>v>>e;
//    vector<int>graph[v];
//
//    for(int i=0;i<e;i++)
//    {
//        cin>>s>>d;
//        graph[s].push_back(d);
//    }
//
//    topologicalsort(graph,v);
//}


///cycle detection on topological sort
//bool cycle(int v,vector<int>graph[])
//{
//    vector<int>indegree(v,0);
//
//    for(int i=0;i<v;i++)
//    {
//        for(int j=0;j<graph[i].size();j++)
//        {
//            int neighbour=graph[i][j];
//            indegree[neighbour]++;
//        }
//    }
//
//    queue<int>q;
//    for(int i=0;i<v;i++)
//    {
//        if(indegree[i]==0)
//        {
//            q.push(i);
//        }
//    }
//
//    int count=0;
//
//    while(!q.empty())
//    {
//        int node=q.front();
//        q.pop();
//        count++;
//
//        for(int j=0;j<graph[node].size();j++)
//        {
//            int neighbor=graph[node][j];
//            indegree[neighbor]--;
//            if(indegree[neighbor]==0)
//            {
//                q.push(neighbor);
//            }
//        }
//    }
//
//    return (count!=v);
//}
//
//int main()
//{
//    int v,e;
//    cin>>v>>e;
//
//    vector<int>graph[v];
//    int s,d;
//
//    for(int i=0;i<e;i++)
//    {
//        cin>>s>>d;
//        graph[s].push_back(d);
//    }
//
//    if(cycle(v,graph))
//    {
//        cout<<"cycle detedcted";
//    }
//    else
//    {
//        cout<<"no cycle found";
//    }
//    return 0;
//}


//`union find
#include<iostream>
#include<vector>
using namespace std;

int find(int u,int parent)
{
    if(parent[u]<0) return u;
    return find(parent[u],parent);
}

void unionbyweight(int u,int v,int parent)
{
    int pu=find(u,parent),pv=find(v,parent);

    if(pu!=pv)
    {
        if(parent[pu]<parent[pv])
        {
            parent[pu]+=parent[pv];
            parent[pv]=pu;
        }
        else
        {
            parent[pv]+=parent[pu];
            parent[pu]=pv;
        }
    }
}


///kruskals algorithm
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef vector<pair<int,pair<int,int>>> viii;

// Find with path compression
int find(int u, int parent[]) {
    if (parent[u] < 0) return u;
    return parent[u] = find(parent[u], parent);
}

// Union by weight (size)
void unionbyweight(int u, int v, int parent[]) {
    int pu = find(u, parent);
    int pv = find(v, parent);

    if (pu != pv) {
        if (parent[pu] < parent[pv]) {
            parent[pu] += parent[pv];
            parent[pv] = pu;
        } else {
            parent[pv] += parent[pu];
            parent[pu] = pv;
        }
    }
}


// Kruskal's Algorithm
viii kruskals(viii g, int v) {
    viii res;
    int s, d, w;
    int parent[v];

    for (int i = 0; i < v; i++)
        parent[i] = -1;

    sort(g.begin(), g.end());

    int e = g.size();
    for (int i = 0; i < e; i++) {
        s = g[i].second.first;
        d = g[i].second.second;
        w = g[i].first;

        if (find(s, parent) != find(d, parent)) {
            res.push_back(g[i]);
            unionbyweight(s, d, parent);
        }
    }
    return res;
}

viii kruskals(viii g,int v)
{
    viii res;
    int s,d,w;
    int parent[v];
    for(int i=0;i<v;i++)
    {
        parent[i]=-1;
    }

    sort(g.begin(),g.end());

    int e=g.size();
    for(int i=0;i<e;i++)
    {
        s=g[i].second.first;
        d=g[i].second.second;
        w=g[i].first;

        if(find(s,parent)!=find(d,parent))
        {
            res.push_back(g[i]);
            unionbyweight(s,d,parent);
        }
    }
    return res;
}

viii kruskals(viii g,int v)
{
    viii res;
    int s,d,w;
    int parent[v];

    for(int i=0;i<v;i++)
    {
        parent[i]=-1;
    }

    sort(g.begin(),g.end());

    int e=g.size();
    for(int i=0;i<e;i++)
    {
        s=g[i].second.first;
        d=g[i].second.second;
        w=g[i].first;

        if(find(s,parent)!=find(d,parent))
        {
            res.push_back(g[i]);
            unionbyweight(s,d,parent);
        }
    }
    return res;
}

int main() {
    viii g, res;
    int v, e, s, d, w;

    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    cout << "Enter edges (source destination weight):\n";
    for (int i = 0; i < e; i++) {
        cin >> s >> d >> w;
        g.push_back(make_pair(w, make_pair(s, d)));
    }

    res = kruskals(g, v);
    int sum = 0;

    cout << "\nEdges in MST:\n";
    for (int i = 0; i < res.size(); i++) {
        int w = res[i].first;
        cout << res[i].second.first << " - " << res[i].second.second << " : " << w << endl;
        sum += w;
    }

    cout << "Total weight of MST: " << sum << endl;

    return 0;
}

///prims algorithm
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii; // (weight, vertex)

// Prim's Algorithm to find Minimum Spanning Tree
int primMST(int V, vector<vector<pii>>& adj, int src = 0) {
    vector<int> key(V, INT_MAX);      // Minimum weights
    vector<bool> inMST(V, false);     // To track included vertices
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    key[src] = 0;
    pq.push({0, src});

    int totalCost = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if (inMST[u]) continue;

        inMST[u] = true;
        totalCost += wt;

        for (auto& [v, weight] : adj[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({weight, v});
            }
        }
    }

    // Check if all vertices are in MST
    for (bool included : inMST) {
        if (!included) return -1; // Graph is disconnected
    }

    return totalCost;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<pii>> adj(V);

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // Undirected graph
    }

    int cost = primMST(V, adj);

    if (cost != -1)
        cout << "Total cost of MST: " << cost << endl;
    else
        cout << "The graph is disconnected. No MST exists." << endl;

    return 0;
}


///prims algo
int spanningtree(int v, vector<vector<int>> adj[]) {
    // Min-heap priority queue {weight, node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> vis(v, 0);
    int sum = 0;

    pq.push({0, 0}); // Start with node 0, weight 0

    while (!pq.empty()) {
        auto it = pq.top();
        pq.pop();

        int wt = it.first;
        int node = it.second;

        if (vis[node]) continue;

        vis[node] = 1;
        sum += wt;

        for (auto &edge : adj[node]) {
            int adjNode = edge[0];
            int edW = edge[1];
            if (!vis[adjNode]) {
                pq.push({edW, adjNode});
            }
        }
    }
    return sum;
}

void dfs(vector<vector<int>>& graph, int n, int start)
{
    vector<bool> visited(n, false);
    stack<int> st;

    visited[start] = true; // FIXED: assignment, not brace-init
    st.push(start);

    cout << "DFS TRAVERSAL: ";

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        cout << node << " ";

        for (int i = 0; i < n; i++)
        {
            if (graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true; // FIXED: assignment, not brace-init
                st.push(i);
            }
        }
    }
    cout << endl;
}

// BFS Traversal
void bfs(vector<vector<int>>& graph, int start, int n)
{
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true; // FIXED: assignment, not brace-init
    q.push(start);

    cout << "BFS TRAVERSAL: ";
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";
        for (int i = 0; i < n; i++)
        {
            if (graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main()
{
    int start, n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));

    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    cout << "Enter the starting vertex: ";
    cin >> start;

    bfs(graph, start, n);
    dfs(graph, n, start);

    return 0;
}
