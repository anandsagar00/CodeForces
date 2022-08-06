#include<iostream>
using namespace std;

bool isNearlyucky(long long int n)
{
    int count=0;
    while(n>0)
    {
        if(n%10==4 || n%10==7)
        count++;
        n/=10;
    }
    if(count==0)
    return false;
    while(count>0)
    {
        if(count%10!=4 && count%10!=7)
        return false;
        count/=10;
    }
    return true;
}

int main()
{
    long long int n;
    cin>>n;
    if(isNearlyucky(n))
    cout<<"YES\n";
    else
    cout<<"NO\n";
}