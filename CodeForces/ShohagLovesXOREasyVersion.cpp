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
        ll x, m;
        cin >> x >> m;
        ll ans = 0;
        for (ll y = 1; y <= min(2 * x, m); y++)
        {
            if (x != y && (x % (x ^ y) == 0 || y % (x ^ y) == 0))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}