#include<iostream> 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_len=1;
    int current_max_len=1;
    int prev_num=-10;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            prev_num=x;
            continue;
        }
        if(x>prev_num)
        {
            current_max_len++;
            max_len=max(current_max_len,max_len);
        }
        else
        {
            current_max_len=1;
        }
        prev_num=x;
    }
    cout<<max_len<<"\n";
}