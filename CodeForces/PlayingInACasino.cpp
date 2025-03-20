#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(m + 1);
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                ll x;
                cin >> x;
                a[j].push_back(x);
            }
        }
        ll ans = 0;
        for (ll j = 1; j <= m; j++)
        {
            sort(a[j].begin(), a[j].end());
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                ans += 1LL * a[j][i] * i - sum;
                sum += a[j][i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}