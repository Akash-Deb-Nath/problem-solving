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
        ll n, p;
        cin >> n >> p;
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        vector<ll> b(n);
        for (auto &i : b)
        {
            cin >> i;
        }
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());
        ll person = n - 1;
        ll ans = p;
        for (ll i = 0; i < n; i++)
        {
            ll mn = min(v[i].second, person);
            ans = ans + mn * min(v[i].first, p);
            person -= mn;
        }
        cout << ans << endl;
    }

    return 0;
}