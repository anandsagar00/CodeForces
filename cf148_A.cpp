#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    //denoting 1 by damaged and 0 by not damaged
    vector<bool> v(d+1,0);

    int i=1;
    while(i*k<=d)
    {
        v[i*k]=1;
        i++;
    }
    i=1;
    while(i*l<=d)
    {
        v[i*l]=1;
        i++;
    }
    i=1;
    while(i*m<=d)
    {
        v[i*m]=1;
        i++;
    }
    i=1;
    while(i*n<=d)
    {
        v[i*n]=1;
        i++;
    }
    int count=0;
    for(int i=1;i<=d;i++)
    count+=v[i];
    cout<<count<<"\n";
}