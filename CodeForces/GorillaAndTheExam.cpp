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
        vector<ll> a(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<ll> ans;
        for (auto &i : mp)
        {
            ans.push_back(i.second);
        }
        sort(ans.begin(), ans.end());
        for (auto &i : ans)
        {
            if (i <= k)
            {
                k -= i;
                i = 0;
            }
            else
            {
                break;
            }
        }
        ll count = 0;
        for (auto &i : ans)
        {
            if (i > 0)
            {
                count++;
            }
        }
        ll result = count > 0 ? count : 1;
        cout << result << "\n";
    }
    return 0;
}