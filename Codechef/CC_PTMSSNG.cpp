// https://www.codechef.com/submit/PTMSSNG

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unordered_map<int,int> umpx;
	    unordered_map<int,int> umpy;
	    for(int i=0;i<(4*n)-1;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        umpx[x]++;
	        umpy[y]++;
	    }
	    for(auto it=umpx.begin();it!=umpx.end();it++)
	    {
	        if((it->second)%2==1)
	        {
	            cout<<it->first<<" ";
	            break;
	        }
	    }
	    for(auto it=umpy.begin();it!=umpy.end();it++)
	    {
	        if((it->second)%2==1)
	        {
	            cout<<it->first<<"\n";
	            break;
	        }
	    }
	}
	return 0;
}
