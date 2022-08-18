// B. Present from Lena

#include<iostream>
using namespace std;

void printUP(int n)
{
    for(int i=0;i<=n;i++)//to change line
    {
        for(int sp=0;sp<n-i;sp++)//control space on left
        cout<<"  ";

        for(int j=0;j<=i;j++)//first half of triangle
        {
            if(i==0)
            cout<<j;
            else
            cout<<j<<" ";
        }

        for(int j=i-1;j>=0;j--)
        {
            if(j==0)
            cout<<j;
            else
            cout<<j<<" ";
        }

        cout<<"\n";

    }
}

void printDOWN(int n)
{
    for(int i=0;i<n;i++)//to change line
    {
        for(int sp=0;sp<=i;sp++)//to control space
        cout<<"  ";

        for(int j=0;j<=n-i-1;j++)//to build left half of triangle
        {
            if(i==n-1)
            cout<<j;
            else
            cout<<j<<" ";
        }

        for(int j=n-i-2;j>=0;j--)
        {
            if(j==0)
            cout<<j;
            else
            cout<<j<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    printUP(n);
    printDOWN(n);
}