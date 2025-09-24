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
    vector<ll> p(n);
    for (auto &i : p)
    {
        cin >> i;
    }
    vector<ll> s(n);
    for (auto &i : s)
    {
        cin >> i;
    }
    for (ll i = 0; i + 1 < n; i++)
    {
        if (p[i] % p[i + 1] != 0)
        {
            no;
            return;
        }
        if (s[i + 1] % s[i] != 0)
        {
            no;
            return;
        }
    }
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        ll g = gcd(p[i], s[i]);
        a[i] = (p[i] / g) * s[i];
    }
    ll cur = a[0];
    if (cur != p[0])
    {
        no;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        cur = gcd(cur, a[i]);
        if (cur != p[i])
        {
            no;
            return;
        }
    }
    cur = a[n - 1];
    if (cur != s[n - 1])
    {
        no;
        return;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        cur = gcd(a[i], cur);
        if (cur != s[i])
        {
            no;
            return;
        }
    }
    yes;
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