//Cookies
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((sum-v[i])%2==0)
        count++;
    }
    cout<<count<<"\n";
}