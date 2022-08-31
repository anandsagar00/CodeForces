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
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='G')
            s1[i]='B';
            if(s2[i]=='G')
            s2[i]='B';

            if(s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";
    }
}