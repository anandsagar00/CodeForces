// Traveling Salesman Problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> left_x;
        vector<int> right_x;
        vector<int> up_y;
        vector<int> down_y;

        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x<0)
            {
                left_x.push_back(abs(x));
            }
            else if(x>0)
            {
                right_x.push_back(x);
            }
            else if(y<0)
            {
                down_y.push_back(abs(y));
            }
            else if(y>0)
            {
                up_y.push_back(y);
            }
        }
        //I have pushed 0 as when I use c++ stl max_element I don't get error
        left_x.push_back(0);
        right_x.push_back(0);
        down_y.push_back(0);
        up_y.push_back(0);
        int max_left=*max_element(left_x.begin(), left_x.end());
        int max_right=*max_element(right_x.begin(), right_x.end());
        int max_up=*max_element(down_y.begin(), down_y.end());
        int max_down=*max_element(up_y.begin(), up_y.end());

        int ans=2*(max_left+max_right+max_up+max_down);
        cout<<ans<<"\n";
    }
}