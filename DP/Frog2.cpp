#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(name, r, c, val) vector<vll> name(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll>
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

ll dp[100005];
ll k;

ll stone(vll &h, ll n)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll ans = LONG_LONG_MAX;
    for (ll i = 1; i <= k; i++)
    {
        if (n - i >= 1)
        {
            ans = min(ans, stone(h, n - i) + abs(h[n] - h[n - i]));
        }
    }
    return dp[n] = ans;
}

void solve()
{
    ll n;
    cin >> n >> k;
    vll h(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    ll ans = stone(h, n);
    dekhao(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(dp, -1, sizeof(dp));
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}