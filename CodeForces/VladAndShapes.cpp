#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int r = 0;
            for (int j = 0; j < n; j++)
            {
                r = r + a[i][j] - '0';
            }
            v.push_back(r);
        }
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0 && (v[i - 1] == v[i]))
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}