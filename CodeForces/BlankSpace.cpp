#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        ll ans = 0, temp = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                temp++;
            }
            else
            {
                temp = 0;
            }
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }

    return 0;
}
