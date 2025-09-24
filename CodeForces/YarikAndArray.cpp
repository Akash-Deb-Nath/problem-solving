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

void solve()
{
    ll n;
    cin >> n;
    vll a(n + 1);
    vll temp(n + 1);
    temp.pb(-1);
    loop(i, 1, n + 1)
    {
        cin >> a[i];
        ll x = abs(a[i]);
        temp[i] = (x & 1);
    }
    ll ans = LONG_LONG_MIN;
    ll sum = 0;
    loop(i, 1, n + 1)
    {
        if (temp[i] != temp[i - 1])
        {
            sum += a[i];
        }
        else
        {
            sum = a[i];
        }
        ans = max(ans, sum);
        sum = max(0ll, sum);
    }
    dekhao(ans);
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