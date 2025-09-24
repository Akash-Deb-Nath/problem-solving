#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353
#define vll vector<ll>
#define TwoDVll(name, r, c, val) vector<vll> name(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll>
#define msll multiset<ll>
#define maxPqll priority_queue<ll>
#define minPqll priority_queue<ll, vll, greater<ll>>
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

ll binExpo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll n, m, k, q;
    cin >> n >> m >> k >> q;
    vector<ll> x(q), y(q);
    for (ll i = 0; i < q; i++)
    {
        cin >> x[i] >> y[i];
    }
    set<ll> r, c;
    ll cnt = 0;
    rloop(i, q - 1, 0)
    {
        if (r.size() == n || c.size() == m)
        {
            break;
        }
        if (r.count(x[i]) && c.count(y[i]))
        {
            continue;
        }
        cnt++;
        r.insert(x[i]);
        c.insert(y[i]);
    }
    cout << binExpo(k, cnt, mod) << '\n';
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