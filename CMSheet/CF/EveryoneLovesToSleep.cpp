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
    ll n, H, M;
    cin >> n >> H >> M;
    ll time = 60 * H + M;
    ll ans = 24 * 60;
    for (ll i = 0; i < n; ++i)
    {
        ll h, m;
        cin >> h >> m;
        ll t = 60 * h + m - time;
        if (t < 0)
        {
            t += 24 * 60;
        }
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << "\n";
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