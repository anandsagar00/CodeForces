//  Burenka Plays with Fractions

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && c==0)
        {
            cout<<"0\n";
            continue;
        }
        else if(a==0 || c==0)
        {
            cout<<"1\n";
            continue;
        }
        int g1=__gcd(a,b);
        int g2=__gcd(c,d);
        a=a/g1;
        b=b/g1;
        c=c/g2;
        d=d/g2;
        if(a==c && b==d)
        {
            cout<<"0\n";
            continue;
        }
        else if(a==c && b!=d)
        {
            //numerator is equal
            if(b==1 || d==1)
            {
                cout<<"1\n";
                continue;
            }
            else
            {
                double pro1=((a*1.0*d)/(b*1.0*c));
                long long int pro2=((a*1LL*d)/(b*1LL*c));
                double pro3=((b*1.0*c)/(a*1.0*d));
                long long int pro4=((b*1LL*c)/(a*1LL*d));
                if(pro1==pro2 || pro3==pro4)
                {
                    cout<<"1\n";
                    continue;
                }
                else{
                cout<<"2\n";
                continue;
                }
            }
        }
        else if(a!=c && b==d)
        {
            if(a==1 || c==1)
            {
                cout<<"1\n";
                continue;
            }
            else
            {
                double pro1=((a*1.0*d)/(b*1.0*c));
                long long int pro2=((a*1LL*d)/(b*1LL*c));
                double pro3=((b*1.0*c)/(a*1.0*d));
                long long int pro4=((b*1LL*c)/(a*1LL*d));
                if(pro1==pro2 || pro3==pro4)
                {
                    cout<<"1\n";
                    continue;
                }
                else{
                cout<<"2\n";
                continue;
                }
            }
        }
        else
        {
                double pro1=((a*1.0*d)/(b*1.0*c));
                long long int pro2=((a*1LL*d)/(b*1LL*c));
                double pro3=((b*1.0*c)/(a*1.0*d));
                long long int pro4=((b*1LL*c)/(a*1LL*d));
                if(pro1==pro2 || pro3==pro4)
                {
                    cout<<"1\n";
                    continue;
                }
                else{
                cout<<"2\n";
                continue;
                }
        }
    }
}