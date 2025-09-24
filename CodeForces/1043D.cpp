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
    vll deals;
    ll temp = n;
    while (temp > 0)
    {
        deals.pb(temp % 3);
        temp /= 3;
    }
    ll sum = accumulate(all(deals), 0LL);
    ll i = 0;
    while (sum > k)
    {
        if (i >= deals.size())
        {
            deals.pb(0);
        }
        if (deals[i] >= 3)
        {
            ll t = deals[i] / 3;
            deals[i + 1] += t;
            deals[i] %= 3;
            sum = accumulate(all(deals), 0LL);
        }
        else
        {
            i++;
        }
        if (i >= deals.size())
        {
            break;
        }
    }
    sum = accumulate(all(deals), 0LL);
    if (sum > k)
    {
        dekhao(-1);
        return;
    }
    ll ans = 0;
    loop(i, 0, deals.size())
    {
        if (i < cost.size())
        {
            ans += deals[i] * cost[i];
        }
        else
        {
            ll a = 1;
            loop(j, 0, i + 1)
            {
                a *= 3;
            }
            ll b = 1;
            loop(j, 0, i - 1)
            {
                b *= 3;
            }
            ans += deals[i] * (a + i * b);
        }
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