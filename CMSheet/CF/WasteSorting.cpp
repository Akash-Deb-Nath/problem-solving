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
    vector<ll> c(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    vector<ll> a(5);
    for (ll i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    c[0] -= a[0];
    c[1] -= a[1];
    c[2] -= a[2];
    if (c[0] < 0 || c[1] < 0 || c[2] < 0)
    {
        no;
        return;
    }
    ll x = min(c[0], a[3]);
    c[0] -= x;
    a[3] -= x;
    ll y = min(c[1], a[4]);
    c[1] -= y;
    a[4] -= y;
    if (a[3] + a[4] <= c[2])
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