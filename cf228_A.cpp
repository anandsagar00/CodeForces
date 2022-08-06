//Is your horseshoe on the other hoof?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_map<int,int> umap;
    umap[a]++;
    umap[b]++;
    umap[c]++;
    umap[d]++;
    cout<<4-umap.size()<<"\n";
}