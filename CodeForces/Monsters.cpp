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
        vector<pair<ll, ll>> ans;
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            x %= k;
            if (!x)
            {
                x = k;
            }
            ans.push_back({x, -i});
        }
        sort(ans.rbegin(), ans.rend());
        for (auto [x, i] : ans)
        {
            cout << -i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}