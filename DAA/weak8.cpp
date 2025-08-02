///q)2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<pair<int,pair<int,int>>> viii;

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

viii kruskals(viii g,int v)
{
    viii res;
    int s,d,w;
    int parent[v];

    for(int i=0;i<v;i++)
    {
        parent[v]=-1;
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
            unionbyweights(s,d,parent);
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
