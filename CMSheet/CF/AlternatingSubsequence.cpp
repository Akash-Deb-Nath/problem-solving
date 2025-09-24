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
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll sum = 0;
    ll pos = 0;
    ll neg = LONG_LONG_MIN;
    loop(i, 0, n)
    {
        if (a[i] > 0)
        {
            if (neg != LONG_LONG_MIN)
            {
                sum += neg;
                neg = LONG_LONG_MIN;
            }
            pos = max(pos, a[i]);
        }
        else
        {
            if (pos != 0)
            {
                sum += pos;
                pos = 0;
            }
            neg = max(neg, a[i]);
        }
    }
    if (pos != 0)
    {
        sum += pos;
    }
    if (neg != LONG_LONG_MIN)
    {
        sum += neg;
    }
    dekhao(sum);
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