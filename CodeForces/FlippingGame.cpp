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
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            a++;
            b = max(0LL, b - 1);
        }
        else
        {
            b++;
        }
        c = max(c, b);
    }
    if (a == n)
    {
        n--;
        dekhao(n);
    }
    else
    {
        ll ans = a + c;
        dekhao(ans);
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