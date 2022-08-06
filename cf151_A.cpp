// Soft Drinking

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink_vol=k*l;
    int total_slices=c*d;
    int total_salt_grams=p;

    int total_toasts=min(total_drink_vol/nl,min(total_slices,total_salt_grams/np));
    cout<<total_toasts/n<<"\n";
}