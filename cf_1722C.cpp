#include <bits/stdc++.h>
using namespace std;

void input(vector<string> &v, unordered_map<string, int> &ump, int n)
{
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        ump[s]++;
    }
}

int calScore(vector<string> &v, unordered_map<string, int> &ump, int n)
{
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        if(ump[v[i]]==2)
        score+=1;
        else if(ump[v[i]]==1)
        score+=3;
    }
    return score;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<string, int> ump;
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
        input(v1, ump, n);
        input(v2, ump, n);
        input(v3, ump, n);
        int s1=calScore(v1, ump, n);
        int s2=calScore(v2, ump, n);
        int s3=calScore(v3, ump, n);
        cout<<s1<<" "<<s2<<" "<<s3<<"\n";
    }
}