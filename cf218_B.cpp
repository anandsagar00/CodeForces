// https://codeforces.com/problemset/problem/218/B

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <queue>
#include <deque>
#include <utility>
#include <unordered_map>
#include <set>
#include <map>
#include <unordered_set>
#include <string>
#include <limits.h>
using namespace std;
#define ll long long int
const int mod = 1e9 + 7;
int main()
{
    ll n, m;
    cin >> n >> m;
    priority_queue<ll> pq;//max priority queue
    priority_queue<ll,vector<ll>,greater<ll>> pq1;//min priority queue
    ll total_seats = n;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
        pq1.push(x);
    }

    ll max_ans = 0,min_ans=0;
    ll ts = total_seats;
    while(ts>0 && !pq1.empty())
    {
        if(ts>=pq1.top()){
        ts-=pq1.top();
        min_ans+=((pq1.top()+1)*pq1.top())/2;
        }
        else
        {
            ll temp=pq1.top()-ts;
            min_ans+=((((pq1.top()+1)*pq1.top())/2)-(((temp+1)*temp)/2));
            ts=0;
            break;
        }
        pq1.pop();
    }
    ts=total_seats;
    while (ts > 0 && !pq.empty())
    {
        int max_top_seat = pq.top();
        pq.pop();
        max_ans += max_top_seat;
        max_top_seat -= 1;
        ts -= 1;
        if(ts<=0) break;
        pq.push(max_top_seat);
    }
    cout<<max_ans<<" "<<min_ans<<"\n";
}