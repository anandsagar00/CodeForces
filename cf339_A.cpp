//Helpful Maths
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v;
    stringstream ss;
    ss<<s;
    string x;
    while(getline(ss,x,'+'))
    {
        
        v.push_back(x[0]-'0');
    }
    sort(v.begin(),v.end());
    int l=v.size();
    for(int i=0;i<l;i++)
    {
        if(i==l-1)
        cout<<v[i];
        else
        cout<<v[i]<<"+";
    }
}