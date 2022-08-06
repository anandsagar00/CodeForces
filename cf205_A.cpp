//  Little Elephant and Rozdil
#include<iostream>
#include<limits.h>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int minimum=INT_MAX;
    unordered_map<int,int> umap;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<minimum)
        {
            index=i+1;
            minimum=x;
        }
        umap[x]++;
    }
    if(umap[minimum]==1)
    {
        cout<<index<<"\n";
    }
    else
    {
        cout<<"Still Rozdil\n";
    }

}