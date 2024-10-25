#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        for (int i = 1; i <= n / 2; i++)
        {
            if (a[i] == a[i - 1] || a[n - i] == a[n - i - 1])
            {
                swap(a[i], a[n - i - 1]);
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}