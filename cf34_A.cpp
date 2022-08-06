// Reconnaissance 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int min_diff=INT_MAX;
    pair<int,int> ans;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(i>=1)
        {
            if(abs(v[i]-v[i-1])<min_diff)
            {
                ans=make_pair(i,i+1);
                min_diff=abs(v[i]-v[i-1]);
            }
            if(i==n-1 && abs(v[i]-v[0])<min_diff)
            {
                ans=make_pair(i+1,1);
                min_diff=abs(v[i]-v[0]);
            }
        }
    }
    cout<<ans.first<<" "<<ans.second<<"\n";
}