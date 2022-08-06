//HQ9+

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}