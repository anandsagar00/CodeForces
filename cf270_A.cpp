// Fancy Fence

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int angle;
        cin>>angle;
        //we will use the formula angle = (n-2)*180 / n
        float ans=360*1.0/(180-angle);
        if(floor(ans)==ceil(ans))
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}