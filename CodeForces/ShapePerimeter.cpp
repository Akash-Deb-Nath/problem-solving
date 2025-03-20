#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a = m, b = m;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (i != 0)
            {
                a += x;
                b += y;
            }
        }
        ll ans = 2 * (a + b);
        cout << ans << "\n";
    }

    return 0;
}