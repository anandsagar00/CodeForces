//  Amusing Joke
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    unordered_map<char,int> umap;
    unordered_map<char,int> ump;
    for(int i=0;s1[i]!='\0';i++)
    umap[s1[i]]++;
    for(int i=0;s2[i]!='\0';i++)
    umap[s2[i]]++;

    for(int i=0;s3[i]!='\0';i++)
    ump[s3[i]]++;

    int flag=0;

    if(umap.size()!=ump.size())
    {
        flag=1;
    }
    else 
    {
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            if(it->second != umap[it->first])
            {
                flag=1;
                break;
            }
        }
    }
    
    if(!flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}