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

void solve()
{
    ll n;
    cin >> n;
    vll a, b;
    ll l = 1, r = (2 * n) - 1;
    loop(i, 0, n)
    {
        if (i & 1)
        {
            a.pb(l);
            l += 2;
        }
        else
        {
            a.pb(r);
            r -= 2;
        }
    }
    l = 2, r = 2 * n;
    loop(i, 0, n)
    {
        if (i & 1)
        {
            b.pb(l);
            l += 2;
        }
        else
        {
            b.pb(r);
            r -= 2;
        }
    }
    reverse(all(b));
    for (auto &i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
    for (auto &i : b)
    {
        cout << i << " ";
    }
    cout << "\n";
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