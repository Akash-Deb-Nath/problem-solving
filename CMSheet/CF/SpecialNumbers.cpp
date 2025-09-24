#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll binExpoNBase(ll n, ll k, ll m)
{
    ll res = 0;
    ll x = 1;
    for (ll i = 0; i < 31; i++)
    {
        if (k & (1 << i))
        {
            res = (res + x) % m;
        }
        x = x * n % m;
    }
    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = binExpoNBase(n, k, mod);
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