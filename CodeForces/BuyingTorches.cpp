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
        ll x, y, k;
        cin >> x >> y >> k;
        ll totalSticks = y * k + k - 1;
        ll ans = ((totalSticks + x - 2) / (x - 1)) + k;
        cout << ans << "\n";
    }

    return 0;
}