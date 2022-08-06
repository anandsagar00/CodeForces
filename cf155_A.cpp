#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int best=arr[0];
    int worst=arr[0];
    int count=0;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>best || arr[i]<worst)
        count++;
        best=max(best,arr[i]);
        worst=min(worst,arr[i]);
    }
    cout<<count<<"\n";
}