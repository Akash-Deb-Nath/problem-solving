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
    vll ans;
    ll p = 10;
    loop(i, 1, 19)
    {
        ll d = p + 1;
        if (n % d == 0)
        {
            ll x = n / d;
            ans.pb(x);
        }
        if (p > 1e18 / 10)
        {
            break;
        }
        p *= 10;
    }
    if (ans.empty())
    {
        dekhao(0);
    }
    else
    {
        asort(ans);
        dekhao(ans.size());
        loop(i, 0, ans.size())
        {
            cout << ans[i] << " \n"[i == ans.size() - 1];
        }
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