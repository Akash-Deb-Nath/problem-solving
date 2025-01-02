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
        vector<ll> p(n);
        for (auto &i : p)
        {
            cin >> i;
        }
        ll s = 0, e = 1e15;
        ll ans = 0;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            ll sum = p[0] + mid;
            bool flag = 1;
            for (ll i = 1; i < n; i++)
            {
                if (p[i] * 100 > k * sum)
                {
                    flag = 0;
                    break;
                }
                sum = sum + p[i];
            }
            if (flag)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}