// https://www.codechef.com/START55C/problems/MEANMEDIAN

#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<queue>
#include<deque>
#include<utility>
#include<unordered_map>
#include<set>
#include<map>
#include<unordered_set>
#include<string>
#include<limits.h>
using namespace std;
#define ll long long int
const int mod=1e9+7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int sumof3=3*x;
        int req_sum=sumof3-y;
        for(int i=-1000;i<=1000;i++)
        {
            int fnum=req_sum-i;
            if(fnum>=-1000 && fnum<=1000)
            {
                cout<<min(fnum,i)<<" "<<y<<" "<<max(i,fnum)<<"\n";
                break;
            }
        }
    }
}