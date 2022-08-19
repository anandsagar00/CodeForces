// https://www.codechef.com/submit/CM164364?tab=statement
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    unordered_map<int,int> ump;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        ump[x]++;
	    }
	    vector<int> v;
	    for(auto it=ump.begin();it!=ump.end();it++)
	    {
	        v.push_back(it->second);
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    int s=v.size();
	    for(int i=0;i<s;i++)
	    {
	        if(x>=v[i])
	        {
	            x=x-(v[i]-1);
	            v[i]=1;
	        }
	        else if(x<v[i])
	        {
	            x=0;
	            v[i]-=x;
	        }
	        if(x<=0)
	        break;
	    }
	    if(x>0)
	    {
	        for(int i=0;i<s;i++)
	        {
	            if(x>0)
	            {
	                x-=v[i];
	                v[i]=0;
	            }
	            if(x<=0) break;
	        }
	    }
	    int ans=0;
        for(int i=0;i<s;i++)
        {
            if(v[i]>0) ans++;
        }
        cout<<ans<<"\n";
	}
	return 0;
}
