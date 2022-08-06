// Jzzhu and Children

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    deque<pair<int,int>> dq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pair<int,int> p=make_pair(x,i+1);
        dq.push_back(p);
    }
    while(dq.size()!=1)
    {
        pair<int,int> p=dq.front();
        dq.pop_front();
        if(p.first > m)
        {
            p.first-=m;
            dq.push_back(p);
        }
    }
    cout<<dq.front().second<<"\n";
}