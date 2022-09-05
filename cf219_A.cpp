// k-String
// https://codeforces.com/problemset/problem/219/A

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
    int k;
    cin >> k;
    string s;
    cin >> s;
    if (k == 1)
    {
        cout << s << "\n";
        return 0;
    }

    unordered_map<char, int> ump; // to store the count of all the chars

    for (int i = 0; s[i] != '\0'; i++)
        ump[s[i]]++;

    int flag = 0;
    string ans = "";

    for (auto &it : ump)
    {
        if (it.second%k !=0)//if any letter doesn't occur a multiple of k 
        {
            flag = 1;
            break;
        }
        else
        {
            for(int i=1;i<=(it.second)/k;i++)//if it occurs a multiple of k times then we will put it freq/k times so that it can be repeates k times later
                ans.push_back(it.first);
        }
    }
    if (!flag)
    {
        sort(ans.begin(),ans.end());
        for (int i = 0; i < k; i++)
            cout << ans;
        cout << "\n";
    }
    else
        cout << "-1\n";
}