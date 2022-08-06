// Shuffle Hashing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string p,h;
        cin>>p>>h;

        int pl=p.length();
        int hl=h.length();

        unordered_map<char,int> umap;
        for(int i=0;p[i]!='\0';i++)
        {
            umap[p[i]]++;
        }

        int flag=0;//flag to indicate that we have found password in hash
        for(int i=0;i<hl;i++)
        {
            unordered_map<char,int> temp;
            for(int j=i;j<(i+pl);j++)
            {
                temp[h[j]]++;
            }
            int flag2=0;//this is a flag to denote frequency mismatch
            for(auto &it:umap)
            {
                if(it.second != temp[it.first])
                {
                    flag2=1; // the freq did not match
                    break;
                }
            }
            if(!flag2)
            {
                flag=1;//this is to indicate that we have found the password in hash
                break;
            }
        }
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}