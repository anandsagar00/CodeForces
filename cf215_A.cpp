// Bicycle Chain

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int m;
    cin>>m;

    vector<int> b;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    int max_gear_ratio=-1;
    for(int j=m-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            float temp_gear_ratio=(b[j]*1.0)/a[i];
            if(temp_gear_ratio==floor(temp_gear_ratio))
            {
                max_gear_ratio=temp_gear_ratio>max_gear_ratio?temp_gear_ratio:max_gear_ratio;
            }
        }
    }
    int count=0;
    for(int j=m-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            float temp_gear_ratio=(b[j]*1.0)/a[i];
            if(temp_gear_ratio==floor(temp_gear_ratio) && temp_gear_ratio==max_gear_ratio)
            {
                count++;
            }
        }
    }
    cout<<count<<"\n";
}