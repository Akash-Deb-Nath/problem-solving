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
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

ll msb(ll x)
{
    if (x <= 1)
    {
        return 0;
    }
    return 64 - __builtin_clzll(x - 1);
}
void solve()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll mnA = min(a, n - a + 1);
    ll mnB = min(b, m - b + 1);
    ll x1 = 1 + msb(n) + msb(mnB);
    ll x2 = 1 + msb(m) + msb(mnA);
    ll ans = min(x1, x2);
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