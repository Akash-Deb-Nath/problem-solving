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
    ll a, b;
    cin >> a >> b;
    ll xK, yK;
    cin >> xK >> yK;
    ll xQ, yQ;
    cin >> xQ >> yQ;
    ll dx[4] = {-1, 1, -1, 1};
    ll dy[4] = {-1, -1, 1, 1};
    set<pll> kS, qS;
    loop(i, 0, 4)
    {
        kS.insert({xK + a * dx[i], yK + b * dy[i]});
        kS.insert({xK + b * dx[i], yK + a * dy[i]});
        qS.insert({xQ + a * dx[i], yQ + b * dy[i]});
        qS.insert({xQ + b * dx[i], yQ + a * dy[i]});
    }
    ll ans = 0;
    for (auto i : kS)
    {
        if (qS.find(i) != qS.end())
        {
            ans++;
        }
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