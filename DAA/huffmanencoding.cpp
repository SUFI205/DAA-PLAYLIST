#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct minHeapelement
{
    char c;
    int freq;
    string s;
    minHeapelement *left,*right;
};

void heapify(minHeapelement *arr[],int i,int n)
{
    int c1=2*i+1,c2=2*i+2;
    int minelement=i;
    if(c1<n && arr[c1]->freq < arr[minelement]->freq)
    {
        minelement=c1;
    }
    else if(c2<n &&arr[c2]->freq < arr[minelement]->freq)
    {
        minelement=c2;
    }

    if(minelement!=i)
    {
        swap(arr[i],arr[minelement]);
        heapify(arr,minelement,n);
    }
}

void minheapify(minHeapelement* arr[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,i,n);
    }
}

minHeapelement* extract_min(minHeapelement* arr[],int &n)
{
    swap(arr[0],arr[n-1]);
    minHeapelement* ret=arr[n-1];
    n--;
    heapify(arr,0,n);
    return ret;
}

void percolate_up(minHeapelement *arr[],int i,int n)
{
    int parent=(i-1)/2;
    if(i==0 || arr[parent]->freq > arr[i]->freq)
    {
        return;
    }
    swap(arr[i],arr[parent]);
    percolate_up(arr,parent,n);
}

void insert(minHeapelement *arr[],int &n,minHeapelement *he3)
{
    arr[n]=he3;
    n++;
    percolate_up(arr,n-1,n);
}

void print(minHeapelement *root,string str)
{
    if(root->c !='$')
    {
        cout<<root->c<<" "<<str<<endl;
        return;
    }
    print(root->left,str+'0');
    print(root->right,str+'1');
}

int main()
{
    int n;
    cin>>n;
    minHeapelement *arr[n];
    char c;
    int freq;
    for(int i=0;i<n;i++)
    {
        cin>>c>>freq;
        arr[i]=new minHeapelement();
        arr[i]->c=c;
        arr[i]->freq=freq;
        arr[i]->left=arr[i]->right=NULL;
    }

    minheapify(arr,n);
    while(n!=1)
    {
        minHeapelement *he1=extract_min(arr,n),*he2=extract_min(arr,n),*he3;
        he3=new minHeapelement();
        he3->c='$';
        he3->freq=he1->freq+he2->freq;
        he3->left=he1;
        he3->right=he2;
        insert(arr,n,he3);
    }
    print(arr[0],"");

}



