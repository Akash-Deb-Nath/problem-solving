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
        ll firstMin = LLONG_MAX;
        vector<ll> b;
        while (n--)
        {
            ll m;
            cin >> m;
            vector<ll> a(m);
            for (auto &i : a)
            {
                cin >> i;
            }
            ll x = *min_element(a.begin(), a.end());
            firstMin = min(firstMin, x);
            a.erase(find(a.begin(), a.end(), x));
            b.push_back(*min_element(a.begin(), a.end()));
        }
        ll secondMin = *min_element(b.begin(), b.end());
        ll ans = firstMin + (ll)accumulate(b.begin(), b.end(), 0ll) - secondMin;
        cout << ans << endl;
    }

    return 0;
}