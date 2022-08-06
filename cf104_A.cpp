// BlackJack

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //He has already got 10 points as he has Queen of Spades
    int req=n-10;
    if(req<=0)
    cout<<"0\n";
    else
    {
        if(req==10)
        {
            //11 face cards and 4 10
            cout<<"15\n";
        }
        else if(req==1)
        {
            cout<<"4\n";
        }
        else if(req==11)
        {
            cout<<"4\n";
        }
        else if(req<=11)
        {
            cout<<"4\n";
        }
        else 
        cout<<"0\n";
    }
}