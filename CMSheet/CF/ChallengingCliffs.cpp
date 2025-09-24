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
    vll h(n);
    for (auto &i : h)
    {
        cin >> i;
    }
    asort(h);
    if (n == 2)
    {
        cout << h[0] << " " << h[1] << "\n";
        return;
    }
    ll pos = -1, mn = LONG_LONG_MAX;
    loop(i, 1, n)
    {
        if (mn > abs(h[i] - h[i - 1]))
        {
            pos = i;
            mn = abs(h[i] - h[i - 1]);
        }
    }
    loop(i, pos, n)
    {
        cout << h[i] << " ";
    }
    loop(i, 0, pos)
    {
        cout << h[i] << " \n"[i == pos - 1];
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