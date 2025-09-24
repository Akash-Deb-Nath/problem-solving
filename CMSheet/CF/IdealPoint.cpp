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
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        if (l <= k && k <= r)
        {
            loop(i, l, r + 1)
            {
                mp[i]++;
            }
        }
    }
    if (mp.empty())
    {
        no;
        return;
    }
    vector<pair<ll, ll>> a(all(mp));
    sort(all(a), [](const auto &a, const auto &b)
         { return a.S > b.S; });
    if ((a.size() == 1 && a[0].F == k) || a[0].S != a[1].S)
    {
        yes;
    }
    else
    {
        no;
    }
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