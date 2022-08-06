// Supercentral Point

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        pair<int,int> p=make_pair(x,y);
        v.push_back(p);
    }

    int count=0;

    for(int i=0;i<n;i++)
    {
        pair<int,int> p1=v[i];
        int x1=p1.first;
        int y1=p1.second;

        int left=0,right=0,up=0,down=0;//flags to denote left,right,up down is found or not

        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            pair<int,int> p2=v[j];

            int x2=p2.first;
            int y2=p2.second;

            if(y1==y2 && x1<x2)
            {
                right=1;
            }
            if(y1==y2 && x1>x2)
            {
                left=1;
            }
            if(x1==x2 && y1>y2)
            {
                down=1;
            }
            if(x1==x2 && y1<y2)
            {
                up=1;
            }

            if(up*down*left*right == 1)
            {
                count++;
                break;
            }

        }
    }
    cout<<count<<"\n";
}