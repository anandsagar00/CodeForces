//Effective Approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,pair<int,int>> umap;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(umap.find(arr[i])==umap.end())
        {
            umap[arr[i]]=make_pair(i,i);
        }
        else
        {
            umap[arr[i]].second=i;
        }
    }
    int m;
    cin>>m;
    long long int vesya_count=0;
    long long int petya_count=0;

    for(int i=1;i<=m;i++)
    {
        int search_var;
        cin>>search_var;
        vesya_count+=(umap[search_var].first + 1);
        petya_count+=(n-umap[search_var].second);
    }
    cout<<vesya_count<<" "<<petya_count<<"\n";
}