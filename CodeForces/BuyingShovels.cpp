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
        ll n, k;
        cin >> n >> k;
        ll ans = n;
        for (ll i = 1; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = min(ans, n / i);
                }
                if (n / i <= k)
                {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}