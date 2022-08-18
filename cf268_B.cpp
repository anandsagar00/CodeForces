// B. Buttons

#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     //we observe a pattern to be formed 
//     long long int ans=n;
//     int i=2,j=1;
//     while(j<n)
//     {
//         ans+=(((n-j)*i)-j);
//         j++;
//         i++;
//     }
//     cout<<ans<<"\n";
// }

int main()
{
    int n;
    cin>>n;
    //we observe a pattern to be formed 
    long long int ans=0;
    //we will count the mistakes this time to guess correct button each time , and we will add n at the end as there would be 1 
    // guess at every step right
    int i=1;
    while(i<=n)
    {
        ans=ans+((n-i)*i);
        i++;
    }
    cout<<ans+n<<"\n";
}