#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        ans += min(v[x - 1], v[y - 1]);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    // cin >> t;
    t = 1; // For single test case
    while (t--)
    {
        solve();
    }

    return 0;
}