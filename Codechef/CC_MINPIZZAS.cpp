#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    cout<<((n*k)/__gcd<ll>(n,k))/k<<"\n";
	}
	return 0;
}
