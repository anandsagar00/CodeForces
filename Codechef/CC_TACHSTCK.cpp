#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	int n,d;
	cin>>n>>d;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	sort(v.begin(),v.end());
	
	int count=0;
	int i=n-1;
	while(i>=1)
	{
	    int diff=abs(v[i]-v[i-1]);
	    if(diff<=d)
	    {
	        count++;
	        i-=2;
	    }
	    else
	    i--;
	}
	cout<<count<<"\n";
	return 0;
}
