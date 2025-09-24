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
    vll a(n);
    priority_queue<pll> pq;
    loop(i, 0, n)
    {
        cin >> a[i];
        if (a[i])
        {
            pq.push({a[i], i + 1});
        }
    }
    vector<pll> ans;
    while (pq.size() >= 2)
    {
        auto x = pq.top();
        pq.pop();
        auto y = pq.top();
        pq.pop();
        ans.pb({x.S, y.S});
        if (x.F > 1)
        {
            pq.push({x.F - 1, x.S});
        }
        if (y.F > 1)
        {
            pq.push({y.F - 1, y.S});
        }
    }
    dekhao(ans.size());
    for (auto &i : ans)
    {
        cout << i.F << " " << i.S << "\n";
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