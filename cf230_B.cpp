//T-prime
//observation : the squares of prime number can only be a T-prime number
#include<bits/stdc++.h>
#define int long long int
#define size 1000000+9
using namespace std;

vector<bool> isPrime(1e6+9,true);

void precompute()
{
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=size;i++)
    {
        if(isPrime[i])
        {
            int j=i*i;
            while(j<=size)
            {
                isPrime[j]=false;
                j+=i;
            }
        }
    }
}

int32_t main()
{
    int n;
    cin>>n;
    precompute();
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int sqrt_x=sqrt(x);
        if(isPrime[sqrt_x] && sqrt_x*sqrt_x==x)//this to ensure that the square root is an integer
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}