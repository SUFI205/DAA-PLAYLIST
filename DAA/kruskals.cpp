#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<pair<int,pair<int,int>>>viii;

typedef vector<pair<int,pair<int,int>>>viii;

typedef vector<pair<int,pair<int,int>>>viii;

typedef vector<pair<int,pair<int,int>>>viii;

int find(int u,int parent[])
{
    if(parent<0) return u;
    return parent[u]=find(parent[u],parent);
}

int find(int u,int parent[u])
{
    if(parent<0) return u;
    return parent[u]=find(parent[u],parent);
}

int find(int u,int parent[])
{
    if(parent<0) return u;
    return parent[u]=find(parent[u],parent);
}

int find(int u,int parent[])
{
    if(parent<0) return u;
    return parent[u]=find(parent[u],parent);
}

void unionbyweights(int u,int v,int parent[])
{
    int pu=find(u,parent);
    int pv=find(v,parent);

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

void unionweights(int u,int v,int parent[])
{
    int pu=find(u,parent);
    int pv=find(v,parent);

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

void unionweights(int u,int v,int parent[])
{
    int pu=find(u,parent);
    int pv=find(v,parent);

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
        d=g[i].second.first;
        d=g[i].second.second;
        w=g[i].first;

    if(find(s,parent)!=find(d,parent))
    {
        res.push_back(g[i]);
        unionbyweights(s,d,parent);
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
        d=g[i].second.first;
        d=g[i].second.second;
        w=g[i].first;

        if(find(s,parent)!=find(d,parent))
        {
            res.push_back(g[i]);
            unionbyweights(s,d,parent);
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
        d=g[i].second.first;
        d=g[i].second.second;
        w=g[i].first;

        if(find(s,aorent)!=find(d,parent))
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
    for(int i=0;i,e;i++)
    {
        d=g[i].second.first;
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
int main()
{
    viii g,res;
    int v,e,s,d,w;
    cout<<"enter no of vertices & edges";
    cin>>v>>e;

    cout<<"enter edges source destination weights";
    for(int i=0;i<e;i++)
    {
        cin>>s>>d>>w;
        g.push_back(make_pair(w,make_pair(s,d)));
    }

    res=kruskals(g,v);
    int sum=0;

    cout<<"edges in mst";
    for(int i=0;i<res.size();i++)
    {
        int w=res[i].first;
        cout<<res[i].second.first<<"_"<<res[i].second.second<<":"<<w<<endl;
        sum+=w;
    }
    cout<<"total weight of mst"<<sum<<endl;
}






///hackerarth
#include <bits/stdc++.h>
using namespace std;

// Type aliases for readability
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<pair<int, pii>> viii;

// Find function with path compression
int find(int u, int parent[]) {
    if (parent[u] < 0)
        return u;
    return parent[u] = find(parent[u], parent);
}

// Union by weight (rank)
void unionweights(int u, int v, int parent[]) {
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

// Kruskal's algorithm implementation
viii kruskals(viii &edges, int v) {
    viii mst;
    int parent[v];
    for (int i = 0; i < v; i++) parent[i] = -1;

    sort(edges.begin(), edges.end()); // Sort by weight

    for (auto edge : edges) {
        int w = edge.first;
        int u = edge.second.first;
        int v_ = edge.second.second;

        if (find(u, parent) != find(v_, parent)) {
            mst.push_back({w, {u, v_}});
            unionweights(u, v_, parent);
        }
    }

    return mst;
}

int main() {
    int v, e;
    cin >> v >> e; // number of vertices and edges

    viii edges;

    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, {u, v}});
    }

    viii mst = kruskals(edges, v);

    int totalWeight = 0;
    for (auto edge : mst) {
        int w = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        cout << u << " - " << v << " : " << w << "\n";
        totalWeight += w;
    }

    cout << "Total Weight of MST: " << totalWeight << endl;

    return 0;
}
