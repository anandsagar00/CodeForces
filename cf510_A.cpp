//  Fox And Snake

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int flag_right=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                if(flag_right)
                {
                    //when the flag to print # towards right is on then we will print # towards right and we will toggle it to print to left
                    if(j!=m-1)
                    cout<<".";
                    else
                    {
                        cout<<"#";
                    }
                }
                else
                {
                    if(j==0)
                    cout<<"#";
                    else
                    cout<<".";
                }
            }
        }
        if(i%2)
        flag_right^=1;//I am xoring it to toggle
        cout<<"\n";
    }
}