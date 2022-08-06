//Bit++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[1]=='+' || s[2]=='+')
        x+=1;
        else
        x-=1;
        
    }
    cout<<x<<"\n";
}