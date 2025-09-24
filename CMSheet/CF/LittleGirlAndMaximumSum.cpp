#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(r, c, val) vector<vll> grid(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
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
#define dekhao(x) cout << x << "\n"
#define debug(x) cout << #x << " = " << x << "\n"
#define nl cout << "\n"

void solve()
{
    ll n, q;
    cin >> n >> q;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vll v(n + 5, 0);
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        v[x - 1] += 1, v[y] -= 1;
    }
    for (ll i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
    }
    dsort(a);
    dsort(v);
    ll ans = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        ans += a[i] * v[i];
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