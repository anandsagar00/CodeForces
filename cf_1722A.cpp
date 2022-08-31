#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO\n";
        }
        else
        {
            unordered_map<char,int> ump;
            for(int i=0;i<5;i++)
            ump[s[i]]++;
            string st="Timur";
            unordered_map<char,int> umap;
            for(int i=0;i<5;i++)
            {
                umap[st[i]]++;
            }
            int flag=0;
            for(auto it:ump)
            {
                if(umap[it.first]!=it.second)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }
}