// Almost Prime

#include<bits/stdc++.h>
using namespace std;

int count_prime_factors(int n)
{
    int count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            count++;//this actually counts the number of prime factors 
        }
    }
    if(n>1)
    count++;
    return count;
}

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(count_prime_factors(i)==2)
        count++;
    }
    cout<<count<<"\n";
}