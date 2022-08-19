#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        if(i==1)
	        cout<<n<<" ";
	        else
	        cout<<i-1<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
