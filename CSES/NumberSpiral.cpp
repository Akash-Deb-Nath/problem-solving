#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll y, x;
        cin >> y >> x;
        if (y > x)
        {
            ll temp = (y - 1) * (y - 1);
            ll add = 0;
            ll ans;
            if (y & 1)
            {
                add = x;
            }
            else
            {
                add = 2 * y - x;
            }
            ans = temp + add;
            cout << ans << endl;
        }
        else
        {
            ll temp = (x - 1) * (x - 1);
            ll add = 0;
            ll ans;
            if (x % 2 == 0)
            {
                add = y;
            }
            else
            {
                add = 2 * x - y;
            }
            ans = temp + add;
            cout << ans << endl;
        }
    }

    return 0;
}