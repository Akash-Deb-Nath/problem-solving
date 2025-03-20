#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m, 0));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        bool flag = 0;
        for (ll i = 0; i < n; i++)
        {
            sort(a[i].begin(), a[i].end());
            for (ll j = 1; j < m; j++)
            {
                if (a[i][j] - a[i][j - 1] != n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<pair<ll, ll>> ans;
        for (ll i = 0; i < n; i++)
        {
            ans.push_back({a[i][0], i});
        }
        sort(ans.begin(), ans.end());
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i].second + 1 << " \n"[i == n - 1];
        }
    }

    return 0;
}