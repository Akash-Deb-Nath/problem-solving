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
        vector<ll> c(n);
        map<ll, ll> mp;
        for (auto &i : c)
        {
            cin >> i;
            mp[i]++;
        }
        ll temp = 0;
        ll ans = 0;
        for (auto &i : mp)
        {
            if (i.second == 1)
            {
                temp++;
            }
            else
            {
                ans++;
            }
        }
        ans = ans + ((temp + 1) / 2) * 2;
        cout << ans << endl;
    }

    return 0;
}