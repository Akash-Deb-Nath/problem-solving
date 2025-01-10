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
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll ans = abs(x - y) * a + min(2 * a, b) * min(x, y);
        cout << ans << "\n";
    }

    return 0;
}