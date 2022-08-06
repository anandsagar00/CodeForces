#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    string answer="";
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            answer.push_back('1');
        }
        else
        answer.push_back('0');
    }
    cout<<answer<<"\n";
}