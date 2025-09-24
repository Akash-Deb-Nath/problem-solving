#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353
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
#define debug(x) cout << #x << " = " << x << "\n";

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
    ll n;
    cin >> n;
    vector<ll> p(n);
    vector<ll> q(n);
    for (auto &i : p)
    {
        cin >> i;
    }
    for (auto &i : q)
    {
        cin >> i;
    }
    ll maxP = 0, maxQ = 0;
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        if (p[i] > p[maxP])
        {
            maxP = i;
        }
        if (q[i] > q[maxQ])
        {
            maxQ = i;
        }

        if (p[maxP] > q[maxQ])
        {
            ans[i] = (binExpo(2, p[maxP], mod) + binExpo(2, q[i - maxP], mod)) % mod;
        }
        else if (p[maxP] < q[maxQ])
        {
            ans[i] = (binExpo(2, p[i - maxQ], mod) + binExpo(2, q[maxQ], mod)) % mod;
        }
        else
        {
            if (p[i - maxQ] > q[i - maxP])
            {
                ans[i] = (binExpo(2, p[i - maxQ], mod) + binExpo(2, q[maxQ], mod)) % mod;
            }
            else
            {
                ans[i] = (binExpo(2, p[maxP], mod) + binExpo(2, q[i - maxP], mod)) % mod;
            }
        }
    }
    for (auto &i : ans)
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