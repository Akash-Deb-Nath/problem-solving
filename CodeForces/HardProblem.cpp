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
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
        ll temp = 2 * m;
        ll x = temp - min(a, m) - min(b, m);
        ll ans = min(a, m) + min(b, m) + min(c, x);
        cout << ans << endl;
    }

    return 0;
}