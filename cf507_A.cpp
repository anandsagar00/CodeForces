//Amr and Music

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());

    int max_instruments=0;

    vector<int> indices;//this vector will store the indices of the instruments learnt

    for(int i=0;i<n;i++)
    {
        if(k<=0)
        break;
        if(v[i].first<=k)
        {
            k-=v[i].first;
            max_instruments++;
            indices.push_back(v[i].second);
        }
    }
    cout<<max_instruments<<"\n";
    for(auto &ind:indices)
    cout<<ind<<" ";
    cout<<"\n";
}