#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll power(ll n)
{
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans = ans * 10;
    }
    return ans;
}

ll maxDigit(ll x)
{
    ll mx = -1;
    while (x)
    {
        mx = max(mx, x % 10);
        x = x / 10;
    }
    return mx;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll count = 0;
    if (x == 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        while (x <= (power(n)))
        {
            x = x * maxDigit(x);
            if (x <= (power(n)))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    solve();
    return 0;
}
