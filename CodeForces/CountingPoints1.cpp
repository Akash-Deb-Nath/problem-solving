#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll Count(ll x, ll r)
{
    ll count = 0;
    ll temp = 0;
    for (ll i = x - i; i <= x + i; i++)
    {
        ll d = (x - i) * (x - i);
        temp = r * r - d;
        if (temp >= 0)
        {
            ll y = sqrt(temp);
            count += 2 * y + 1;
        }
    }
    return count;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> x(n);
    for (auto &i : x)
    {
        cin >> i;
    }
    vector<ll> r(n);
    for (auto &i : r)
    {
        cin >> i;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += Count(x[i], r[i]);
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