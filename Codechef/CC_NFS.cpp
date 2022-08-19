#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll u,v,a,s;
        cin>>u>>v>>a>>s;
        double end_vel=sqrt<ll>((u*u)-(2*a*s));
        if(end_vel>v)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
}