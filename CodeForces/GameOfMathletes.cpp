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
        ll n, k;
        cin >> n >> k;
        vector<ll> x(n);
        unordered_map<ll, ll> mp;
        for (auto &i : x)
        {
            cin >> i;
            mp[i]++;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll temp = k - x[i];
            if (mp[x[i]] > 0 && mp[temp] > 0)
            {
                if (x[i] == temp && mp[x[i]] < 2)
                {
                    continue;
                }
                ans++;
                mp[x[i]]--;
                mp[temp]--;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}