// Middle of the Contest

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2;
    char ch;
    cin>>h1>>ch>>m1;
    cin>>h2>>ch>>m2;
    int total_hours=h1+h2;
    int total_minutes=(total_hours*60) + (m1+m2);

    int average=total_minutes/2;

    int hour=average/60;//to denote time in hour of resultant time
    int minutes=average%60; // to denote time in minutes 

    if(hour>=0 && hour<=9)
    {
        cout<<"0"<<hour<<":";
    }
    else 
    cout<<hour<<":";
    if(minutes>=0 && minutes<=9)
    {
        cout<<"0"<<minutes<<"\n";
    }
    else
    {
        cout<<minutes<<"\n";
    }
}