// sale

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int answer=0;
    int ind=0;
    while(v[ind]<0 && ind<m && ind<n)
    {
        answer+=abs(v[ind]);
        ind++;
    }
    cout<<answer<<"\n";
}