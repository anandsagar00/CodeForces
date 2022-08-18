// B. OR in Matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<int> temp(c, 1);
    vector<vector<int>> arr(r, temp);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (r == 1 && c == 1)
    {
        cout << "YES\n";
        cout << arr[0][0] << "\n";
        return 0;
    }

    int flag = 1; // flag to denote matrix is correct or wrong
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // logic : if any element is 1 then it's entire row and col should be 1
            if (arr[i][j] == 1)
            {
                int found_one = 0;
                for (int k = 0; k < c; k++)
                {
                    if (k == j)
                        continue;
                    if (arr[i][k])
                    {
                        found_one = 1;
                        break;
                    }
                }
                if (found_one)
                    continue;
                for (int k = 0; k < r; k++)
                {
                    if (k == i)
                        continue;
                    if (arr[k][j])
                    {
                        found_one = 1;
                        break;
                    }
                }
                if (found_one == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (!flag)
        cout << "NO\n";
    else
    {
        vector<vector<int>> v(r, temp);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] == 0)
                {
                    for (int k = 0; k < c; k++)
                    {
                        v[i][k] = 0;
                    }
                    for (int k = 0; k < r; k++)
                    {
                        v[k][j] = 0;
                    }
                }
            }
        }
        //generating the matrix back from newly generated matrix
        vector<vector<int>> arr1(r, temp);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int one_found = 0;
                for (int k = 0; k < c; k++)
                {
                    if (v[i][k] == 1)
                    {
                        one_found = 1;
                        break;
                    }
                }
                if (one_found)
                {
                    arr1[i][j] = 1;
                    continue;
                }
                for (int k = 0; k < r; k++)
                {
                    if (v[k][j] == 1)
                    {
                        one_found = 1;
                        break;
                    }
                }
                if (!one_found)
                {
                    arr1[i][j] = 0;
                }
            }
        }
        //checking if both matrix are equal or not
        if (arr == arr1)
        {
            cout << "YES\n";
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << v[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else
            cout << "NO\n";
    }
}