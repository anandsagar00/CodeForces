// https://www.codechef.com/submit/DIV03

#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> v;
	    for(int i=0;i<10;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int k;
	    cin>>k;
	    int s=v.size();
	    for(int i=s-1;i>=0;i--)
	    {
	        if(k>=v[i])
	        {
	            k-=v[i];
	            v[i]=0;
	        }
	        else
	        {
	            v[i]-=k;
	            k=0;
	        }
	        if(k<=0)
	        break;
	    }
	    int ans=-1;
	    for(int i=s-1;i>=0;i--)
	    {
	        if(v[i]!=0)
	        {
	            ans=i+1;
	            break;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
