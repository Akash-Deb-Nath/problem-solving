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
        ll l, r;
        cin >> l >> r;
        r = r - l;
        ll s = 1, e = 1e9;
        ll ans = 0;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (mid * (mid + 1) <= 2 * r)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << ans + 1 << "\n";
    }

    return 0;
}