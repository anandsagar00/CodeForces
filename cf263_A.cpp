//Beautiful Matrix
#include<iostream> 
using namespace std;

int main()
{
    int arr[5][5];
    int r=-1,c=-1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    cout<<abs(r-2)+abs(c-2)<<"\n";
}