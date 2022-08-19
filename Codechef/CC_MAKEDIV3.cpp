#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        s.push_back('1');

        for(int i=1;i<=n-1;i++)
        {
            //here we have created a string with n digits which has 1 as leading digit and rest all 0
            //now to be divisible by 3 we will have to add number 5 to the end, as it is saying odd integer of n digit divisible by 3
            //but not by 9
            if(i!=n-1)
            s.push_back('0');
            else
            s.push_back('5');
        }
        if(n==1)
        cout<<3<<"\n";
        else
        cout<<s<<"\n";
    }
}