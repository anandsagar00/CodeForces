// https://codeforces.com/problemset/problem/459/B

#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<queue>
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
    ll n;
    cin>>n;
    vector<ll> v(n);
    unordered_map<ll,ll> ump;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        ump[v[i]]++;
    }
    sort(v.begin(),v.end());
    ll max_beauty_diff=v[n-1]-v[0];
    ll ways=0;
    for(int i=0;i<n;i++)
    {
        ll req=(v[i]<=max_beauty_diff)?(max_beauty_diff+v[i]):(abs(max_beauty_diff-v[i]));
        if(req!=v[i])
        ways+=(ump[req]*ump[v[i]]);
        else
        ways+=(((ump[req]-1)*ump[req])/2);//if there are flowers with same beauty than they can pair up in (n*(n-1))/2 ways
        
        if(ways!=0){
        ump[req]=0;//setting to 0 so that it can't be used again
        ump[v[i]]=0;
        }
    }
    cout<<max_beauty_diff<<" "<<ways<<"\n";
}