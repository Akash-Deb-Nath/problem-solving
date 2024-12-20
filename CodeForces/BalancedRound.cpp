#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        ll temp = 1;
        ll ans = 0;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        for (ll i = 0; i + 1 < n; i++)
        {
            if (a[i + 1] - a[i] <= k)
            {
                temp++;
            }
            else
            {
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(ans, temp);
        cout << n - ans << endl;
    }

    return 0;
}