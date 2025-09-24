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

ll cal(ll i, ll k)
{
    ll temp = i % k;
    return min(temp, (k - temp) % k);
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vll s(n);
    for (auto &i : s)
    {
        cin >> i;
    }
    vll t(n);
    for (auto &i : t)
    {
        cin >> i;
    }
    for (auto &i : s)
    {
        i = cal(i, k);
    }
    for (auto &i : t)
    {
        i = cal(i, k);
    }
    asort(s);
    asort(t);
    if (s == t)
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