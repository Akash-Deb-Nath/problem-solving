#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<array<int, 26>> pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i];
        pre[i + 1][a[i] - 'a']++;
        pre[i + 1][b[i] - 'a']--;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;

        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            ans += max(0, pre[r][i] - pre[l][i]);
        }
        cout << ans << "\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}