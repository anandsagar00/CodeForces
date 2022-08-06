//String Task
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char a)
{
    if(a>=97 && a<=122)
    {
        a=a-32;
    }
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='Y')
    return true;
    return false;
}

int main()
{
    string s;
    cin>>s;
    string answer="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(!isVowel(s[i]))
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
                answer.push_back('.');
                answer.push_back(s[i]);
            }
            else if(!isVowel(s[i]))
            {
                answer.push_back('.');
                answer.push_back(s[i]);
            }
        }
    }
    cout<<answer<<"\n";
}