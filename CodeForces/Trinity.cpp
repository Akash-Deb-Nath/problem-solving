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
        sort(a.begin(), a.end());
        ll ans = n;
        for (ll i = 0; i + 1 < n; i++)
        {
            ll s = i + 1, e = n - 1, index = i + 1;
            while (s <= e)
            {
                ll mid = s + (e - s) / 2;
                if (a[i] + a[i + 1] > a[mid])
                {
                    index = mid;
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
            ans = min(ans, n - (index - i + 1));
        }
        cout << ans << "\n";
    }

    return 0;
}