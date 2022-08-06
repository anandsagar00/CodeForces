// Presents

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        umap[x]=i+1;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<umap[i]<<" ";
    }
}