// Football

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<string,int> ump;
    pair<string,int> answer;
    answer.second=-1;

    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        ump[s]++;

        if(ump[s] >= answer.second)
        {
            answer.first=s;
            answer.second=ump[s];
        }
    }
    cout<<answer.first<<"\n";
}