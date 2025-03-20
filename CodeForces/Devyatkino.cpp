#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

bool Digit(ll n)
{
    while (n > 0)
    {
        ll d = n % 10;
        if (d == 7)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 10;
    for (ll i = 9; i <= 1e9; i = i * 10 + 9)
    {
        ll count = 0;
        ll m = n;
        while (!Digit(m))
        {
            count++;
            m += i;
        }
        ans = min(ans, count);
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