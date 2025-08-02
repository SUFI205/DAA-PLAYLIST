#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void topologicalsortutils(vector<int>graph,bool visited[],stack<int>&st,int i)
{
    visited[i]=true;
    int n=graph[i].size();
    for(int j=0;j<n;j++)
    {
        if(!visited[graph[i][j]])
        {
            topologicalsortutils(graph,visited,st,graph[i][j]);
        }
    }
    st.push(i);
}

void topologicalsort(vector<int>graph[],int v)
{
    bool visited[v];
    stack<int>st;
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }

    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            topologicalsortutils(graph,visited,st,i);
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
    }
}
