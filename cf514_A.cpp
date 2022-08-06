// Chewbaсca and Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        int dig=s[i]-'0';
        if(i==0 && dig>4 && dig<9)
        {
            dig=9-dig;
            s[i]=dig+'0';
        }
        else if(i!=0 && dig>4)
        {
            dig=9-dig;
            s[i]=dig+'0';
        }
    }
    cout<<s<<"\n";
}