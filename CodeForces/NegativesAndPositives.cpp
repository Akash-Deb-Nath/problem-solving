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
        ll ans = 0, mn = LLONG_MAX, neg = 0;
        for (auto &i : a)
        {
            cin >> i;
            ans = ans + abs(i);
            mn = min(mn, abs(i));
            if (i < 0)
            {
                neg++;
            }
        }
        ans = (neg & 1) ? ans - 2 * mn : ans;
        cout << ans << endl;
    }

    return 0;
}