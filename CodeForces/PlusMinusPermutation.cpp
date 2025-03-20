#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll a = n / x;
    ll b = n / y;
    ll lcm = (x * y) / __gcd(x, y);
    ll c = n / lcm;
    ll a1 = a - c;
    ll b1 = b - c;
    ll ans = (sum(n) - sum(n - a1)) - sum(b1);
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