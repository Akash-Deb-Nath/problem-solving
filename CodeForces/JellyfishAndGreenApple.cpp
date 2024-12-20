#include "bits/stdc++.h"

using namespace std;

#define ll long long

const ll INF = 2e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        for (ll i = 0; i < 60; i++)
        {
            while (n < m)
            {
                ans += n;
                n *= 2;
            }
            n %= m;
            if (n == 0)
            {
                break;
            }
        }
        if (n > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}