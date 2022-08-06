#include<bits/stdc++.h>
using namespace std;

void toLower(string &s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        s[i]+=32;
    }
}
void toUpper(string &s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122)
        s[i]-=32;
    }
}

int main()
{
    string s;
    cin>>s;
    int uc=0,lc=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        uc++;
        else
        lc++;
    }
    if(uc>lc)
    {
        toUpper(s);
        cout<<s<<"\n";
    }
    else if(uc<lc)
    {
        toLower(s);
        cout<<s<<"\n";
    }
    else
    {
        toLower(s);
        cout<<s<<"\n";
    }
}