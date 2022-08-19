// There are N
//  students in a class, where the i
// -th student has a score of Ai
// .

// The i
// -th student will boast if and only if the number of students scoring less than or equal Ai
//  is greater than the number of students scoring greater than Ai
// .

// Find the number of students who will boast.

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
        vector<int> count(101,0);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            count[x]++;
        }

        vector<int> cum_sum(101,0);//this will basically store the count of all the students scoring less than or equal to i
        cum_sum[0]=count[0];
        for(int i=1;i<=100;i++)
        {
            cum_sum[i]=count[i]+cum_sum[i-1];
        }

        int count_total=0;//to store count of students boasting
        for(int i=0;i<=100;i++)
        {
            if(count[i]==0)
            continue;
            if(cum_sum[i]>(n-cum_sum[i]))
            count_total+=count[i];
        }
        cout<<count_total<<"\n";
    }
}