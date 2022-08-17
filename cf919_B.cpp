// B. Perfect Number

#include<bits/stdc++.h>
using namespace std;

int sod(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int k;
    cin>>k;
    // 19 , 28 , 37 , 46 , 55 , 64 ,...., 91 , x 100 x , 109 ,...
    //we observe that there is an increase in each number by 9 and there are some cases where the sum of digits does not equals 10 
    // we will check that condition separately
    int count=1;
    int num=19;
    while(count<k)
    {
        num+=9;
        if(sod(num)==10)
        {
            count++;
            if(count==k) break;
        }
    }
    cout<<num<<"\n";
}