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

bool check(vll &a, ll n, ll mid, ll h)
{
    ll sum = mid;
    loop(i, 0, n - 1)
    {
        sum += min(a[i + 1] - a[i], mid);
    }
    return sum >= h;
}

void solve()
{
    ll n, h;
    cin >> n >> h;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll l = 0, r = h;
    ll k = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(a, n, mid, h))
        {
            k = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    dekhao(k);
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