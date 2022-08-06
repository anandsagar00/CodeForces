// The New Year: Meeting Friends

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,cb,cc;
    cin>>ca>>cb>>cc;

    int a=min(ca,min(cb,cc));
    int c=max(ca,max(cb,cc));
    int b=(ca+cb+cc)-(a+c);

    int total_dist=(b-a)+(c-b);
    cout<<total_dist<<"\n";
}