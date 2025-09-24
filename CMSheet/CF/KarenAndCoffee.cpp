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
    ll n, k, q;
    cin >> n >> k >> q;
    vll a(2e5 + 5, 0);
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    vll pref(2e5 + 5);
    loop(i, 1, 2e5 + 5)
    {
        a[i] += a[i - 1];
        if (a[i] >= k)
        {
            pref[i] = 1;
        }
        else
        {
            pref[i] = 0;
        }
    }
    loop(i, 1, 2e5 + 5)
    {
        pref[i] += pref[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        dekhao(pref[r] - pref[l - 1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}