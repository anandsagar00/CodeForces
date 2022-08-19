
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int pt;
    cin>>pt;
    if(pt%6==0)
    cout<<"yes\n";
    else
    {
        long long int last_pt=(pt/6)*6;
        if(last_pt+1 == pt || last_pt+3==pt || last_pt+6==pt)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
}