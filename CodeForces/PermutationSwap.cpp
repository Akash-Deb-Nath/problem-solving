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
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            ans = __gcd(ans, abs(x - i));
        }
        cout << ans << endl;
    }

    return 0;
}