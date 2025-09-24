#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(r, c, val) <vector<ll>> grid(r, vector<ll>(c, val))
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
#define end cout << "\n"

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (abs(a - b) > 1 || (a + b + 2) > n)
    {
        dekhao(-1);
        return;
    }
    if (a == 0 && b == 0)
    {
        loop(i, 1, n + 1)
        {
            cout << i << " ";
        }
        end;
    }
    else if (a > b)
    {
        ll x = a + b + 1;
        loop(i, 1, n - x + 1)
        {
            cout << i << " ";
        }
        for (ll i = n - x + 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        end;
    }
    else if (b > a)
    {
        ll x = a + b + 1;
        for (ll i = 1; i <= x; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        loop(i, x + 1, n + 1)
        {
            cout << i << " ";
        }
        end;
    }
    else
    {
        ll x = a + b;
        for (ll i = 1; i <= x; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        loop(i, x + 1, n - 1)
        {
            cout << i << " ";
        }
        cout << n << " " << n - 1;
        end;
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