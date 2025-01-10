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
        vector<ll> even, odd;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a & 1)
            {
                odd.push_back(a);
            }
            else
            {
                even.push_back(a);
            }
        }
        if (odd.empty() || even.empty())
        {
            cout << 0 << "\n";
            continue;
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        ll cur = odd.back();
        ll ans = even.size();
        for (auto &i : even)
        {
            if (cur < i)
            {
                ans++;
                break;
            }
            cur += i;
        }
        cout << ans << "\n";
    }

    return 0;
}