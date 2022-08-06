//Parallelepiped
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int ab,bc,ac;
    cin>>ab>>bc>>ac;

    long long int abc=sqrt(ab*bc*ac);
    long long int sum_of_3_sides=((abc/ab)+(abc/bc)+(abc/ac));
    cout<<4*sum_of_3_sides<<"\n";
}