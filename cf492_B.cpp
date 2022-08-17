// B. Vanya and Lanterns

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> v;
    // vector<ll> v2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        // v2.push_back(x);
    }
    sort(v.begin(), v.end());
    double ans = 0;
    if (v[0] == 0 && n>1)
    {
        ans = (v[1] - v[0]) / 2.0;
    }
    else
    {
        ans = v[0];
    }
    for (int i = 1; i < n - 1; i++)
        ans = max((v[i + 1] - v[i]) / 2.0, ans);

    if (v[n - 1] == l)
    {
        ans = max((v[n - 1] - v[n - 2]) / 2.0, ans);
    }
    else
    {
        ans = max(ans, (l - v[n - 1]) * 1.0);
    }
    printf("%.9lf",ans);
}
