#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll, ll>> v[3];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        v[0].push_back({a[i], i});
    }
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        v[1].push_back({b[i], i});
    }
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
        v[2].push_back({c[i], i});
    }
    sort(v[0].rbegin(), v[0].rend());
    sort(v[1].rbegin(), v[1].rend());
    sort(v[2].rbegin(), v[2].rend());
    ll ans = 0;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                if (v[0][i].second != v[1][j].second && v[1][j].second != v[2][k].second && v[2][k].second != v[0][i].second)
                {
                    ans = max(ans, (v[0][i].first + v[1][j].first + v[2][k].first));
                }
            }
        }
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