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
        ll singleOcc = 0, multipleOcc = 0;
        for (auto &i : mp)
        {
            if (i.second == 1)
            {
                singleOcc++;
            }
            else
            {
                multipleOcc++;
            }
        }
        ll ans = multipleOcc + (singleOcc + 1) / 2;
        cout << ans << "\n";
    }

    return 0;
}