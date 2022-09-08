// https://www.codechef.com/START55C/problems/BROKENPHONE

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
        if(x>y)
        cout<<"NEW PHONE\n";
        else if(x<y)
        cout<<"REPAIR\n";
        else
        cout<<"ANY\n";
    }
}