// Interesting drink
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;//to store the prices of drink in the shops
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int k;
        cin>>k;
        int high=n-1;
        int low=0;
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if((mid==n-1 && v[mid]<=k) || (v[mid]<= k && v[mid+1]>k))
            {
                ans=mid+1;
                break;
            }
            else if(k < v[mid] )
            {
                high=mid-1;
            }
            else if(k>=v[mid])
            {
                low=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
}