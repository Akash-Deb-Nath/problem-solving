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

vll p;
vll cost;
void pre()
{
    ll x = 1;
    ll i = 0;
    while (x <= 1e9)
    {
        p.pb(x);
        if (i == 0)
        {
            cost.pb(3);
        }
        else
        {
            ll a = 1;
            loop(j, 0, i + 1)
            {
                a *= 3;
            }
            ll b = 1;
            if (i >= 2)
            {
                loop(j, 0, i - 1)
                {
                    b *= 3;
                }
            }
            cost.pb(a + i * b);
        }
        x *= 3;
        i++;
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vll deals(p.size() + 2, 0);
    ll temp = n;
    ll sum = 0;
    ll i = 0;
    ll mx = 0;
    while (temp > 0)
    {
        deals[i] = (temp % 3);
        sum += deals[i];
        if (deals[i])
        {
            mx = i;
        }
        i++;
        temp /= 3;
    }
    ll ans = 0;
    loop(i, 0, mx + 1)
    {
        ans += deals[i];
    }
    ll rem = k - sum;
    rloop(i, mx, 1)
    {
        ll extra = rem / 2;
        ll t = min(extra, deals[i]);
        if (t > 0)
        {
            ans -= (t * p[i - 1]);
        }
        rem -= t * 2;
        deals[i - 1] += t * 3;
    }
    dekhao(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pre();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}