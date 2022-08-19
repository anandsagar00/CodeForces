// Ichihime and Triangle

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b+c>d && c+d>b && b+d>c)
    cout<<b<<" "<<c<<" "<<d<<" "<<"\n";
    else
    {
        cout<<b<<" "<<c<<" "<<c<<" "<<"\n";
    }
    }
}