// B. Buttons

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //we observe a pattern to be formed 
    long long int ans=n;
    int i=2,j=1;
    while(j<n)
    {
        ans+=(((n-j)*i)-j);
        j++;
        i++;
    }
    cout<<ans<<"\n";
}