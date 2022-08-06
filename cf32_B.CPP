//Borze
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string answer="";
    int l=s.length();
    int i=0;
    while(i<l)
    {
        if(s[i]=='.')
        {
            answer.push_back('0');
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            answer.push_back('1');
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            answer.push_back('2');
            i+=2;
        }
    }
    cout<<answer<<"\n";
}