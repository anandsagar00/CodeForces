// Petr and Book

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int day_number=0;
    while(1)
    {
        for(int i=0;i<7;i++)
        {
            n-=v[i];
            if(n<=0)
            {
                day_number=i+1;
                break;
            }
        }
        if(day_number>0)
        break;
    }
    cout<<day_number<<"\n";
}