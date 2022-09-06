// https://codeforces.com/problemset/problem/58/A
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

bool isPresent(char ch,string &s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch) return true;
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    string ans="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='h' && ans.empty())
        ans.push_back('h');
        else if(s[i]=='e' && ans.length()==1)
        {
            ans.push_back('e');
        }
        else if(s[i]=='l' && ans.length()==2)
        {
            ans.push_back('l');
        }
        else if(s[i]=='l' && ans.length()==3)
        {
            ans.push_back('l');
        }
        else if(s[i]=='o' && ans.length()==4)
        {
            ans.push_back('o');
            break;
        }
    }
    if(ans=="hello")
    cout<<"YES\n";
    else
    cout<<"NO\n";
}