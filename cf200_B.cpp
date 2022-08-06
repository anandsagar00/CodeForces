#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;//numerator and denominator
    int cn=n;
    while(cn--)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    double ans=(sum*1.0)/(1.0*n);
    printf("%.9lf",ans);
}