#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    vector<pair<ll, ll>> p;
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        p.push_back({sum, i});
    }
    sort(p.rbegin(), p.rend());
    vector<ll> temp;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            temp.push_back(a[p[i].second][j]);
        }
    }
    vector<ll> pre(temp.size() + 1);
    for (ll i = 1; i < temp.size() + 1; i++)
    {
        pre[i] = pre[i - 1] + temp[i - 1];
    }
    ll ans = 0;
    for (auto i : pre)
    {
        ans += i;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}