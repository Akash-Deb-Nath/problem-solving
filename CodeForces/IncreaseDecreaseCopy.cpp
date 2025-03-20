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
        for (auto &i : a)
        {
            cin >> i;
        }
        vector<ll> b(n + 1);
        for (auto &i : b)
        {
            cin >> i;
        }
        ll ans = 0, temp = LONG_LONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            ans += abs(a[i] - b[i]);
            temp = min(temp, abs(b.back() - a[i]));
            temp = min(temp, abs(b.back() - b[i]));
            if (min(a[i], b[i]) <= b.back() && b.back() <= max(a[i], b[i]))
            {
                temp = 0;
            }
        }
        ans = ans + temp + 1;
        cout << ans << "\n";
    }

    return 0;
}