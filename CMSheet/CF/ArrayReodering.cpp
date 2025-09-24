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
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll even = 0;
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(all(a), [](ll a, ll b)
         {
             if (a % 2 == 0 && b % 2 != 0)
             {
                 return true;
             }
             if (a % 2 != 0 && b % 2 == 0)
             {
                 return false;
             }
             return a > b; });
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll temp = __gcd(a[i], (2 * a[j]));
            ans += (temp > 1);
        }
    }
    cout << ans << "\n";
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