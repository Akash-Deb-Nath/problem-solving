#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vll b(k);
    for (auto &i : b)
    {
        cin >> i;
    }
    dsort(a);
    asort(b);
    vector<ll> pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    ll l = 0;
    ll ans = 0;
    for (auto &i : b)
    {
        if (l + i > n)
        {
            ans += pre[n] - pre[l];
            l += i;
            break;
        }
        else
        {
            if (i != 1)
            {
                ans += pre[l + i - 1] - pre[l];
            }
            l += i;
        }
    }
    while (l < n)
    {
        ans += a[l];
        l++;
    }
    dekhao(ans);
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