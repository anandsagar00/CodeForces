// Emotes

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int mx=v[n-1];
    int smax=v[n-2];
    long long int ans=0;
    int turns_left=m;
    while(turns_left>0)
    {
        if(k<=turns_left)
        {
            ans+=(k*1LL*mx);
            turns_left-=k;
        }
        else
        {
            ans+=(turns_left*1LL*mx);
            turns_left=0;
        }
        if(turns_left>=1)
        {
            ans+=(smax);
            turns_left-=1;
        }
    }
    cout<<ans<<"\n";
}