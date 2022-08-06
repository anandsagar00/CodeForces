// Sum of Round Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int num;
        cin >> num;
        vector<long long int> v;
        int cnum = num;
        int pow = 1; // this represents the power of 10 , currently I'm at 10^0 i.e. 1
        while (num > 0)
        {
            int dig = num % 10;
            if (dig != 0)
            {
                v.push_back(dig * pow);
            }
            pow *= 10;
            num /= 10;
        }
        cout << v.size() << "\n";
        for (auto &numbers : v)
            cout << numbers << " ";
        cout << "\n";
    }
}