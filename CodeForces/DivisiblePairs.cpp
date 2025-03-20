#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    map<pair<ll, ll>, ll> mp;
    for (auto &i : a)
    {
        cin >> i;
    }
    ll ans = 0;
    for (auto i : a)
    {
        ll a = (x - (i % x)) % x;
        ll b = i % y;
        ans += mp[{a, b}];
        mp[{i % x, i % y}]++;
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