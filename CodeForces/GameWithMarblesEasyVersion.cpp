#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> b(n);
    for (auto &i : b)
    {
        cin >> i;
    }
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back({a[i] + b[i], i});
    }
    sort(v.rbegin(), v.rend());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans += a[v[i].second] - 1;
        }
        else
        {
            ans -= b[v[i].second] - 1;
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