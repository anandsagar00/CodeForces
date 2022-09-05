#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<queue>
#include<deque>
#include<utility>
#include<unordered_map>
#include<set>
#include<map>
#include<unordered_set>
#include<string>
#include<limits.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    priority_queue<int> pq;
    for(int i=1;i<13;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int count=0;
    while(!pq.empty() && k>0)
    {
        k-=pq.top();
        pq.pop();
        count++;
    }
    if(k<=0)
    cout<<count<<"\n";
    else
    cout<<"-1\n";
}