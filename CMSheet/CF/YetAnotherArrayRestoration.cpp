#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(r, c, val) <vector<ll>> grid(r, vector<ll>(c, val))
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
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll d;
    for (ll i = 1; i <= (y - x); ++i)
    {
        if ((y - x) % i == 0 && (y - x) / i < n)
        {
            d = i;
            break;
        }
    }
    ll rem = n - (y - x) / d - 1;
    ll m = min(rem, (x - 1) / d);
    ll ans = x - (m * d);
    for (ll i = 0; i < n; ++i, ans += d)
    {
        cout << ans << " \n"[i == n - 1];
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