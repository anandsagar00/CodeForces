#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    int aBYp=(p*1.0)/a;
	    int bBYq=(q*1.0)/b;
	    if(p%a==0 && q%b==0 && abs(aBYp-bBYq)<=1)
	    {
	        cout<<"YES\n";
	    }
	    else
	    cout<<"NO\n";
	}
	return 0;
}
