#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int lights[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            lights[i][j]=1;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]%2==1)
            {
                //I've used XOR to reverse 1 with 0 and 0 with 1
                int ci=i,cj=j;
                //toggling the current light
                lights[i][j]^=1;
                //toogling the light up
                if(i-1>=0)
                lights[i-1][j]^=1;
                //toogling the light down
                if(i+1<3)
                lights[i+1][j]^=1;
                //toogling the light on left
                if(j-1>=0)
                lights[i][j-1]^=1;
                //toogling the light right
                if(j+1<3)
                lights[i][j+1]^=1;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cout<<lights[i][j];
        cout<<"\n";
    }

}