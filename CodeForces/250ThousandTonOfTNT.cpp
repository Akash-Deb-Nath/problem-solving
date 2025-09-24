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

vector<ll> divisors(ll n)
{
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i != n / i)
                divs.push_back(n / i);
        }
    }
    return divs;
}

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vll pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    vll divisor = divisors(n);
    ll ans = LONG_LONG_MIN;
    for (auto &i : divisor)
    {
        ll mx = LONG_LONG_MIN;
        ll mn = LONG_LONG_MAX;
        ll prev = 0;
        for (ll j = i; j <= n; j += i)
        {
            mx = max(mx, pre[j] - pre[prev]);
            mn = min(mn, pre[j] - pre[prev]);
            prev = j;
        }
        ans = max(ans, mx - mn);
    }
    dekhao(ans);
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