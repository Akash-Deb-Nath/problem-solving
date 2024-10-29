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
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        int ans = 0, res = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            res = res + a[i];
        }
        double avg = res / n;
        if ((n == 1 && a[0] != 0) || n == 2)
        {
            cout << -1 << endl;
        }
        else if (avg / 2 > a[n / 2] || n == 1 && a[0] == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ans = a[n / 2] * 2 * n + 1;
            cout << ans - res << endl;
        }
    }

    return 0;
}