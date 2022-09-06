//https://codeforces.com/problemset/problem/96/A

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
    string s;
    cin>>s;
    int l=s.length();

    int flag=0;

    int i=0;
    while(i<l)
    {
        int j=i;
        int count=0;
        while(j<l && s[j]==s[i])
        j++;
        if(j-i>=7)
        {
            flag=1;
            break;
        }
        i=j;
    }
    if(!flag)
    cout<<"NO\n";
    else
    cout<<"YES\n";
}