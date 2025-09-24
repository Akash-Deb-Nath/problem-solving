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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n * m);
    for (auto &i : a)
    {
        cin >> i;
    }
    asort(a);
    ll ans = 0;
    ll mn = a.front();
    ll mx = a.back();
    ll mnCount = 0, mxCount = 0;
    mnCount = count(all(a), mn);
    mxCount = count(all(a), mx);
    if (mnCount > 1 || mxCount > 1 || n == 1)
    {
        ans = ((n * m) - 1) * (mx - mn);
    }
    else
    {
        ll x = min(n, m);
        ll temp = (((n * m) - 1) - (x - 1)) * (mx - mn);
        a.pop_back();
        ll secondMax = a.back();
        ll ans1 = temp + ((x - 1) * (secondMax - mn));
        ll ans2 = temp + ((x - 1) * (mx - a[1]));
        ans = max(ans1, ans2);
    }
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