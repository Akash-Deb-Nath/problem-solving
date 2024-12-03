#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
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
            ans += i.second / 2;
        }
        cout << ans << endl;
    }
    return 0;
}