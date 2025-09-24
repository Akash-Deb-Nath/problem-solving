#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> countSetBits(64, 0);
    for (auto &i : a)
    {
        for (ll j = 0; j <= 63; j++)
        {
            if ((i >> j) & 1)
            {
                countSetBits[j]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i <= 63; i++)
    {
        if (countSetBits[i] > 0)
        {
            ll pairs = (countSetBits[i] * (n - countSetBits[i])) % mod;
            ll power = (1LL << i) % mod;
            ans = (ans + (pairs * power) % mod) % mod;
        }
    }
    dekhao(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}