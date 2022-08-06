// Beautiful Year

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[10]={0};
    int cn=n;
    while (cn>0)
    {
        arr[cn%10]++;
        cn/=10;
    }
    
}