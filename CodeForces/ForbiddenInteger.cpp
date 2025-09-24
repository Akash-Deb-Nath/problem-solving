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
    ll n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        yes;
        dekhao(n);
        loop(i, 0, n)
        {
            cout << 1 << " ";
        }
        nl;
        return;
    }
    if (n % 2 == 0 && k >= 2)
    {
        yes;
        dekhao(n / 2);
        loop(i, 0, n / 2)
        {
            cout << 2 << " ";
        }
        nl;
        return;
    }
    if ((n & 1) && (k >= 3))
    {
        yes;
        ll temp = (n - 3) / 2 + 1;
        dekhao(temp);
        loop(i, 0, temp - 1)
        {
            cout << 2 << " ";
        }
        cout << 3;
        nl;
        return;
    }
    no;
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