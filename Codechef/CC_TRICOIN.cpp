#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int coins;
        cin>>coins; 
        long long int n=1;
        while(1)
        {
            long long int pro=((n+1)*n)/2;
            if(pro==coins)
            {
                cout<<n<<"\n";
                break;
            }
            else if(pro>coins)
            {
                cout<<(n-1)<<"\n";
                break;
            }
            n++;
        }
    }
}