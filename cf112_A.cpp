// Petya and Strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;a[i]!='\0' ;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
        if(b[i]>='a' && b[i]<='z')
        b[i]=b[i]-32;
    }
    if(a<b)
    cout<<"-1\n";
    else if(a>b)
    cout<<"1\n";
    else
    cout<<"0\n";
}