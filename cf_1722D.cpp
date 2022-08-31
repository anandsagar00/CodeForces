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
        string s;
        cin>>s;
        long long int ans=0;
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                ans+=i;
                pq.push(i);
            }
            else
            {
                ans+=(n-i-1);
                pq.push(n-i-1);
            }
        }
        long long int temp=0;
       for(int i=0;i<n;i++)
       {
        if(!pq.empty()){
            int f=pq.top();
            pq.pop();
            if((ans+n-(2*f +1 )) > ans)
            {
                ans-=f;
                ans+=(n-f-1);
                pq.push(n-f-1);
            }
            else
            {
                pq.push(f);
            }
        }
            cout<<ans<<" ";
       }
        cout<<endl;
    }
}