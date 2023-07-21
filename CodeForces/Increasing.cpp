#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[i + 1])
            {
                temp = 1;
            }
        }
        if ((temp == 0) || (n == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}