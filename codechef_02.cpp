// https://www.codechef.com/START55C/problems/PERMCLEAR

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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int k;
        cin>>k;
        unordered_map<int,int> ump;
        for(int i=0;i<k;i++)
        {
            int x;
            cin>>x;
            ump[x]++;
        }
        for(int i=0;i<n;i++)
        {
            if(ump.find(v[i])==ump.end())
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}