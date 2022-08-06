// Jeff and Digits

#include<bits/stdc++.h>
using namespace std;

int main(){
    //each of the digit is either 0 or 5
    //The number divisible by 90 will also be divisible by 9 and 10

    int n;
    cin>>n;
    int cnt0=0;//count 0
    int cnt5=0;//this stores the count of the digit 5
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(!x)
        cnt0++;
        if(x)
        cnt5++;
    }

    if(!cnt0)
    cout<<"-1\n";
    else
    {
        if(cnt5<9)
        {
            cout<<"0\n";
        }
        else
        {
            int total_five_included=(cnt5/9)*9; //the count of digit 5 must be in multiple of 9
            for(int i=1;i<=total_five_included;i++)
            cout<<5;
            for(int i=0;i<cnt0;i++)
            cout<<0;
            cout<<"\n";
        }
    }

}