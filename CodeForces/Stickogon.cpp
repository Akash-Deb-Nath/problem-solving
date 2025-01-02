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
        map<ll, ll> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        ll ans = 0;
        for (auto &i : mp)
        {
            ans = ans + i.second / 3;
        }
        cout << ans << "\n";
    }

    return 0;
}