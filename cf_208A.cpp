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

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int i=0;
    string str="";
    while(i<=l-3)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(!str.empty())
            cout<<str<<" ";
            str.clear();
            i+=3;
        }
        else
        {
            str.push_back(s[i]);
            i++;
        }
    }
    for(;i<l;i++)
    str.push_back(s[i]);
    if(!s.empty())
    cout<<str<<" ";
}