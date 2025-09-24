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
    string s;
    cin >> s;
    ll n = s.size();
    vll grid[26];
    ll l = s.front() - 'a';
    ll r = s.back() - 'a';
    loop(i, 0, n)
    {
        ll temp = s[i] - 'a';
        grid[temp].pb(i);
    }
    if (l > r)
    {
        ll cost = l - r;
        ll jumps = 0;
        rloop(i, l, r)
        {
            jumps += grid[i].size();
        }
        cout << cost << " " << jumps << "\n";
        rloop(i, l, r)
        {
            for (auto &j : grid[i])
            {
                cout << j + 1 << " ";
            }
        }
        nl;
    }
    else
    {
        ll cost = r - l;
        ll jumps = 0;
        loop(i, l, r + 1)
        {
            jumps += grid[i].size();
        }
        cout << cost << " " << jumps << "\n";
        loop(i, l, r + 1)
        {
            for (auto &j : grid[i])
            {
                cout << j + 1 << " ";
            }
        }
        nl;
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