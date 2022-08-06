#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char prev=s[0];
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==prev)
        {
            count++;
        }
        else
        {
            prev=s[i];
        }

    }
    cout<<count<<"\n";
}