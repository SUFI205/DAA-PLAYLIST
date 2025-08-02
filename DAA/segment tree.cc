//#include<bits/stdc++.h>
//using namespace std;
//int arr[100005],seg[4*100005];
//void build(int index,int low,int high)
//{
//    if(low==high)
//    {
//        seg[index]=arr[low];
//        return;
//    }
//    int mid=low+(high-low)/2;
//    build(2*index+1,low,mid);
//    build(2*index+2,mid+1,high);
//    seg[index]=max(seg[2*index+1],seg[2*index+2]);
//}
//int query(int index,int low,int high,int l,int r)
//{
//    if(low>=l && high<=r)
//        return seg[index];
//        if(high<l || low>r) return INT_MIN;
//        int mid=(low+high)/2;
//        int left=query(2*index+1,low,mid,l,r);
//        int right=query(2*index+2,mid+1,high,l,r);
//        return max(left,right);
//}
//int main()
//{
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    build(0,0,n-1);
//    int Q;
//    cin>>Q;
//    while(Q--)
//    {
//        int l,r;
//        cin>> l >> r;
//        cout<<query(0,0,n-1,l,r);
//    }
//}


#include <bits/stdc++.h>
using namespace std;

vector<int> arr, seg;

void build(int index, int low, int high) {
    if (low == high) {
        seg[index] = arr[low];
        return;
    }
    int mid = low + (high - low) / 2;
    build(2 * index + 1, low, mid);
    build(2 * index + 2, mid + 1, high);
    seg[index] = max(seg[2 * index + 1], seg[2 * index + 2]);
}

int query(int index, int low, int high, int l, int r) {
    if (low >= l && high <= r)
        return seg[index];
    if (high < l || low > r)
        return INT_MIN;
    int mid = (low + high) / 2;
    int left = query(2 * index + 1, low, mid, l, r);
    int right = query(2 * index + 2, mid + 1, high, l, r);
    return max(left, right);
}

void pointupdate(int index,int low,int high,int node,int val)
{
    if(low==high)
        seq[low]+=val;
    else
    {
        int mid=(low+high)>>1;
        if(node<=mid && node>=low)
        {
            pointupdate(2*index+1,low,mid,node,val);
        }
        else
        {
            pointupdate(2*index+2,mid+1,high,node,val);
        }
        seg[index]=seg[2*index+1]+seg[2*index+2];
    }
}

///lazy propagation
void rangeupdate(int index,int low,int high,int l,int r,int val)
{
    if(lazy[index]!=0)
    {
        seg[index]+=(high-low+1)*lazy[index];
        if(low!=high)
        {
            lazy[2*index+1]+=lazy[index];
            lazy[2*index+2]+=lazy[index];
        }
        lazy[index]=0;
    }

    if(r<low || l>high || low>high) return;

    if(low>=l || high<=r)
    {
        seg[index]+=(high-low+1)*val;
        if(low!=high)
        {
            lazy[2*index+1]+=lazy[index];
            lazy[2*index+2]+=lazy[index];
        }
        return;
    }
    int mid=(low+high)>>1;
    rangeupdate[2*index+1,low,mid,l,r,val];
    rangeupdate[2*index+2,mid+1,high,l,r,val];
    seg[index]=seg[2*index+1]+seg[2*index+2];
}

int querysumlazy(int index,int low,int high,int l,int r,int val)
{
    if(lazy[index]!=0)
    {
        seg[index]+=(high-low+1)*lazy[index];
        if(low!=high)
        {
            lazy[2*index+1]+=lazy[index];
            lazy[2*index+2]+=lazy[index];
        }
        lazy[index]=0;
    }

    if(r<low || l>high || low>high) return 0;

    if(low>=l && high<=r)
    {
        return seg[index];
    }

    int mid=(low+high)>>1;
    return querysumlazy(2*index+1,low,mid,l,r,val)+
            querysumlazy(2*index+1,mid+1,high,l,r,val);
}
int main() {
    int n;
    cin >> n;

    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    seg.resize(4 * n);
    build(0, 0, n - 1);

    int Q;
    cin >> Q;
    while (Q--) {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l, r) << "\n";
    }

    return 0;
}
