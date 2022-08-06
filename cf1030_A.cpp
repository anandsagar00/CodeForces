// In Search of an Easy Problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag_hard=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x)
        {
            flag_hard=1;
            break;
        }
    }
    if(flag_hard)
    cout<<"HARD\n";
    else
    cout<<"Easy\n";
}