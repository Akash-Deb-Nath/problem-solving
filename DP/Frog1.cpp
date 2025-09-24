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

ll dp[100005];
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
    ll cost = LONG_LONG_MAX;
    cost = min(cost, stone(h, n - 1) + abs(h[n] - h[n - 1]));
    if (n > 2)
    {
        cost = min(cost, stone(h, n - 2) + abs(h[n] - h[n - 2]));
    }
    return dp[n] = cost;
}
void solve()
{
    ll n;
    cin >> n;
    vll h(n + 1);
    loop(i, 1, n + 1)
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
    solve();

    return 0;
}