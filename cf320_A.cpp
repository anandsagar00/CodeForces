// Magic Numbers

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int i=0;
    int flag=0;//to denote magic number condition turned false in while loop below
    while(i<l)
    {
        if((i+2)<l && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i+=3;
        }
        else if((i+1)<l && s[i]=='1' && s[i+1]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1')
        {
            i++;
        }
        else
        {

            flag=1;
            break;
        }
    }
    if(!flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}