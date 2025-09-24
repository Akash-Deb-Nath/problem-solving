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
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    ll l = 0, r = 2 * k;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        l = max(l, a[i]);
        r = min(r, a[i] + k);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] != -1)
        {
            l = max(l, a[i] + b[i]);
            r = min(r, a[i] + b[i]);
        }
    }
    cout << max(0ll, r - l + 1) << "\n";
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