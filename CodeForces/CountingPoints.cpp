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
    ll n, m, i, ans = 0;
    cin >> n >> m;
    vector<pair<ll, ll>> a(n);
    map<ll, ll> mp, x;
    for (i = 0; i < n; i++)
    {
        cin >> a[i].F;
    }
    for (i = 0; i < n; i++)
    {
        cin >> a[i].S;
    }
    asort(a);
    for (i = 0; i < n; i++)
    {
        mp[a[i].F] = a[i].S;
    }
    for (auto it : mp)
    {
        for (ll j = it.F - it.S; j <= it.F + it.S; j++)
        {
            ll temp = (ll)sqrt(it.S * it.S - (j - it.F) * (j - it.F));
            x[j] = max(x[j], temp);
        }
    }
    for (auto i : x)
    {
        ans += i.S * 2 + 1;
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