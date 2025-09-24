#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
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
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll n = a - 1;
    ll x = 0;
    if (n % 4 == 0)
    {
        x = n;
    }
    else if (n % 4 == 1)
    {
        x = 1;
    }
    else if (n % 4 == 2)
    {
        x = n + 1;
    }
    else
    {
        x = 0;
    }
    ll req = x ^ b;
    if (req == 0)
    {
        dekhao(a);
    }
    else if (req != a)
    {
        dekhao(a + 1);
    }
    else
    {
        dekhao(a + 2);
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