//Even Odds
#include<iostream>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    if(n%2==1)
    n+=1;
    long long int nBY2=n/2;
    if(k<=nBY2)
    {
        cout<<(2*k-1)<<"\n";
    }
    else
    {
        k=k-nBY2;
        cout<<(2*k)<<"\n";
    }
}