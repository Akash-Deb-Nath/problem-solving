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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.rbegin(), a.rend());
    vector<ll> x(n + 1, 0);
    ll walk = 0;
    for (ll i = 1; i <= n; i++)
    {
        x[a[i - 1].second] = (i + 1) / 2 * (i % 2 == 0 ? -1 : 1);
        walk += 2LL * ((i + 1) / 2) * a[i - 1].first;
    }
    cout << walk << '\n';
    for (auto i : x)
    {
        cout << i << ' ';
    }
    cout << '\n';
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