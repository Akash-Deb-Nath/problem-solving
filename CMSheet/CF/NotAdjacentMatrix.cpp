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
    if (n == 1)
    {
        dekhao(1);
        return;
    }
    if (n == 2)
    {
        dekhao(-1);
        return;
    }
    TwoDVll(ans, n, n, 0);
    ll o = 1, e = 2;
    loop(i, 0, n)
    {
        loop(j, 0, n)
        {
            if (o <= n * n)
            {
                ans[i][j] = o;
                o += 2;
            }
            else
            {
                ans[i][j] = e;
                e += 2;
            }
        }
    }
    loop(i, 0, n)
    {
        loop(j, 0, n)
        {
            cout << ans[i][j] << " ";
        }
        nl;
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