// B. Assigning to Classes
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(2*n,0);
        for(int i=0;i<2*n;i++)
        cin>>v[i];

        sort(v.begin(),v.end());

        //we observe that the answer will always be the difference of the two middle numbers , so I made 2 sets the set 1 contains only 1 
        //number and set 2 contains 2n-1 numbers 
        int diff=abs(v[n]-v[n-1]);
        cout<<diff<<"\n";

    }
}