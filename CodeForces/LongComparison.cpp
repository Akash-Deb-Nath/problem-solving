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
    ll x1, p1;
    cin >> x1 >> p1;
    ll x2, p2;
    cin >> x2 >> p2;
    ll mn = min(p1, p2);
    p1 -= mn;
    p2 -= mn;
    if (p1 >= 7)
    {
        dekhao(">");
    }
    else if (p2 >= 7)
    {
        dekhao("<");
    }
    else
    {
        while (p1--)
        {
            x1 *= 10;
        }
        while (p2--)
        {
            x2 *= 10;
        }
        if (x1 > x2)
        {
            dekhao(">");
        }
        else if (x1 < x2)
        {
            dekhao("<");
        }
        else
        {
            dekhao("=");
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