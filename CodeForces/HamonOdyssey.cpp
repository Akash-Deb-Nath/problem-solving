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
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        ll ans = 1;
        ll temp = a[0];
        for (ll i = 0; i < n; i++)
        {
            temp &= a[i];
            if (temp == 0)
            {
                if (i == n - 1)
                {
                    break;
                }
                ans++;
                temp = a[i + 1];
            }
        }
        if (temp != 0)
        {
            ans--;
        }
        ans = max(1ll, ans);
        cout << ans << "\n";
    }

    return 0;
}
