// K-th Not Divisible by n
//explanation : https://www.youtube.com/watch?v=bKOailev87g ,  https://www.youtube.com/watch?v=sV7_NlVMLE0
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll need=((k-1.0)/(n-1));
        ll ans=k+need;
        cout<<ans<<"\n";

    }
}