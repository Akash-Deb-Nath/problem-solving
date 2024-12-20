#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll temp = r / k;
        ll ans = 0;
        if (l <= temp)
        {
            ans = temp - l + 1;
        }
        else
        {
            ans = 0;
        }

        cout << ans << endl;
    }
    return 0;
}