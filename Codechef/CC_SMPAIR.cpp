#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    cout<<v[1]+v[0]<<"\n";
	}
	return 0;
}
