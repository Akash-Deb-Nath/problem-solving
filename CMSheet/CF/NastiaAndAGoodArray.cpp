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

const ll mx = 1999999973;

void solve()
{
    struct goodArray
    {
        ll l, r, x, y;
    };
    ll n;
    cin >> n;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<goodArray> ans;
    if (n & 1)
    {
        n--;
    }
    for (ll i = 0; i < n; i += 2)
    {
        ll mn = min(a[i], a[i + 1]);
        ans.pb({i + 1, i + 2, mn, mx});
    }
    dekhao(ans.size());
    for (auto &i : ans)
    {
        cout << i.l << " " << i.r << " " << i.x << " " << i.y << "\n";
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