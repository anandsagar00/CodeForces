//Boy or Girl

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> umap;
    for(int i=0;s[i]!='\0';i++)
    {
        umap[s[i]]++;
    }
    if(umap.size()%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    cout<<"IGNORE HIM!\n";
}