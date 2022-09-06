// https://codeforces.com/problemset/problem/230/A

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
    int s,n;
    cin>>s>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        pq.push({x,i});
        v[i]=y;
    }
    int flag=0;
    while(!pq.empty())
    {
        if(s<=pq.top().first)
        {
            flag=1;
            break;
        }
        else 
        {
            s+=v[pq.top().second];
            pq.pop();
        }
    }
    if(flag==1)
    cout<<"NO\n";
    else if(pq.empty())
    cout<<"YES\n";
    else
    cout<<"NO\n";
}