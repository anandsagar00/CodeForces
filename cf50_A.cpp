//Domino piling
#include<iostream>
using namespace std; 
int main()
{
    int cm,cn;
    cin>>cm>>cn;
    int ans=0;
    int m=max(cm,cn);
    int n=min(cm,cn);
    ans=ans+((m/2)*n);
    int left=(m*n)-(ans*2);
    ans=ans+(left/2);
    cout<<ans<<"\n";
}