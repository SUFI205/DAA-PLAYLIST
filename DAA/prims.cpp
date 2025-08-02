#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;

typedef pair<int,int>piii;
typedef pair<int,int>piii;
typedef pair<int,int>piii;
int primmst(int v,vector<vector<piii>>&adj,int src=0)
{
    vector<int>key(v,INT_MAX);
    vector<int>inmst(v,false);
    priority_queue<piii,vector<piii>,greater<piii>>pq;

    key[src]=0;
    pq.push({0,src});

    while(!pq.empty())
    {
        int u=pq.top().second;
        int wt=pq.top().first;

        if(inmst[u]) continue;

        inmst[u]=true;

        totalcost+=wt;

        for(auto &[v,weights] : adj[u])
        {
            if(!inmst[v] && weights<key[v])
            {
                key[v]=weights;
                pq.push({weights,v});
            }
        }
    }

    for(bool included:inmst)
    {
        if(!include)
            return -1;
        return totalcost;
    }

}
int primmst(int v,vector<vector<piii>>&adj,int src=0)
{
    vector<int>key(v,INT_MAX);
    vector<bool>inmst(v,false);
    priority_queue<piii,vector<piii>,greater<piii>>pq;

    key[src]=0;
    pq.push({0,src});

    int totalcost=0;

    while(!pq.empty())
    {
        int u=pq.top().second;
        int wt=pq.top().first;
        pq.pop();

        if(inmst[u]) continue;

        inmst[u]=true;

        totalcost+=wt;

        for(auto &[v,weights]:adj[u])
        {
            if(!inmst[v]&&weights<key[v])
            {
                key[v]=weights;
                pq.push({weights,v});
            }
        }
    }

    for(bool include : inmst)
    {
        if(!include) return -1;
    }
    return totalcost;
}

int primemst(int v,vector<vector<piii>>&adj,int src=0)
{
    vector<int>key(v,INT_MAX);
    vector<bool>inmst(v,false);
    priority_queue<piii,vector<piii>,greater<piii>>pq;

    key[src]=0;
    pq.push({0,src});

    int totalcost=0;
    while(!pq.empty())
    {
        int u=pq.top().second;
        int wt=pq.top().first;
        pq.pop();

        if(inmst[u])
            continue;

        inmst[u]=true;
        totalcost+=wt;

        for(auto&[v,weights]: adj[u])
        {
            if(!inmst[v] && weights<key[v])
            {
                key[v]=weights;
                pq.push({weights,v});
            }
        }
    }

    for(bool included : inmst)
    {
        if(!included)
        {
            return -1;
        }
    }
     return totalcost;
}

int primmst(int v,vector<vector<piii>>&adj,int src=0)
{
    vector<int>key(v,INT_MAX);
    vector<bool>inmst(v,false);
    priority_queue<piii,vector<piii>,greater<piii>>pq;

    key[src]=0;
    pq.push({0,src});

    int totalcost=0

    while(!pq.empty())
    {
        int u=pq.top().second;
        int v=pq.top().first;
        pq.pop();

        if(inmst[u])
            continue;

        inmst[u]=true;

        totalcost+=wt;

        for(auto &[v,weights] : adj[u])
        {
            if(!inmst[v] && weights(key[v]))
            {
                key[v]=weights;
                pq.push({weights,v});
            }
        }
    }

    for(bool included : inmst)
    {
        if(!included) return -1;
    }
    return totalcost;s
}

int main()
{
    int e,u,v,w;
    cout<<"enter the number of vertices &edges";
    cin>>v>>e;

    vector<vector<piii>>adj(v);

    cout<<"enter the edges(u,v,w)";
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int cost=primmst(v,adj);

    if(cost!=-1)
    {
        cout<<"total cost of mst"<<cost<<endl;
    }
    else
    {
        cout<<"graph is diconnected"<<endl;
    }
}
