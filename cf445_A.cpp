// https://codeforces.com/problemset/problem/445/A
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

void dfs(int i,int j,int n,int m,string v[],char letter)
{
    if(i<0 || i>=n || j<0 || j>=m || v[i][j]!='.')
    return;
    else
    {
        // cout<<"Entered"<<"\n";
        v[i][j]=letter;
        if(letter=='B')
        letter='W';
        else 
        letter='B';
        dfs(i-1,j,n,m,v,letter);//up
        dfs(i+1,j,n,m,v,letter);//down
        dfs(i,j+1,n,m,v,letter);//right
        dfs(i,j-1,n,m,v,letter);//left
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    string v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // for(int i=0;i<n;i++)
    // cout<<v[i]<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='.')
            {
                dfs(i,j,n,m,v,'B');
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<"\n";
}