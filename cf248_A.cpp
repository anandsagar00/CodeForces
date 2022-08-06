// Cupboards

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int left_open=0;
    int right_open=0;
    for(int i=0;i<n;i++)
    {
        int left,right;
        cin>>left>>right;
        if(left)
        left_open++;
        if(right)
        right_open++;
    }
    int total_time_left=min(left_open,n-left_open);
    total_time_left+=min(right_open,n-right_open);
    cout<<total_time_left<<"\n";
}