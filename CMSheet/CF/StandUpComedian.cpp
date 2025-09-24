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

void solve()
{
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    ll ans = 0;
    ll mn = min(a2, a3);
    ll mx = max(a2, a3);
    if (a1 == 0)
    {
        cout << 1 << "\n";
        return;
    }
    else if (a2 == 0 && a3 == 0)
    {
        ll temp = min(a1, a4);
        ll x = (a4 > temp) ? 1 : 0;
        ans += a1 + temp + x;
        cout << ans << "\n";
    }
    else if (a1 + mn < mx)
    {
        ll temp = mx - (a1 + mn) + a4;
        ll x = (temp == 0) ? 0 : 1;
        ans += 2 * (a1 + mn) + x;
        cout << ans << "\n";
        return;
    }
    else
    {
        ll temp = min((a1 + mn) - mx, a4);
        ll x = (a4 > temp) ? 1 : 0;
        ans += a1 + mn + mx + temp + x;
        cout << ans << "\n";
        return;
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