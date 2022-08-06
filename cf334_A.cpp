//Candy Bags
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<bool> v((n*n+1),1);
    
    // as he bought total of n^2 bags which has 1,2,3,...,n^2 candies in each so total candies would be
    long long int total_candies=(n*n)*((n*n)+1)/2;
    long long int each_brother_share=total_candies/n;

    for(int i=1;i<=n;i++)
    {
        
    }
}