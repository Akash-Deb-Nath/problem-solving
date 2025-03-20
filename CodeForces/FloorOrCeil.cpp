#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll mx(ll ans, ll n, ll m)
{
    for (ll i = 1; i <= n; i++)
    {
        ans >>= 1;
    }
    for (ll i = 1; i <= m; i++)
    {
        (ans = (ans + 1) >> 1);
    }
    return ans;
}
ll mn(ll ans, ll n, ll m)
{
    for (ll i = 1; i <= m; i++)
    {
        (ans = (ans + 1) >> 1);
    }
    for (ll i = 1; i <= n; i++)
    {
        ans >>= 1;
    }
    return ans;
}
void solve()
{
    ll x, n, m;
    cin >> x >> n >> m;
    n = min(n, 32ll);
    m = min(m, 32ll);
    cout << mn(x, n, m) << " " << mx(x, n, m) << "\n";
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