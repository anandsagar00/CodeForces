#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n)
{
    if(n==1 || n==0) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(m+1,1);
    v[0]=0;
    v[1]=0;
    for(int i=2;i<=m;i++)
    {
        if(isPrime(i))
        {
            int j=2;
            while(j*i<=m)
            {
                v[j*i]=0;
                j++;
            }
        }
    }
    int flag=0;
    for(int i=n+1;i<=m;i++)
    {
        if(v[i]==1 && i!=m)
        {
            flag=1;
            break;
        }
        if(i==m && v[i]==1)
        {
            cout<<"YES\n";
        }
        else if(i==m && v[i]==0)
        cout<<"NO\n";
    }
    if(flag)
    {
        cout<<"NO\n";
    }
}