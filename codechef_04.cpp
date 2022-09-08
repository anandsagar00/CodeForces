// https://www.codechef.com/START55C/problems/BALLBOX

#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<queue>
#include<math.h>
#include<deque>
#include<utility>
#include<unordered_map>
#include<set>
#include<map>
#include<unordered_set>
#include<string>
#include<limits.h>
using namespace std;
#define ll long long int
const int mod=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==1)
        cout<<"YES\n";
        else if(n<=k)
        cout<<"NO\n";
        else
        {
            ll sum=((k+1)*1LL*k)/2;
            if(n>=sum)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
}