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
        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pre(n + 1);
        ll curRating = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (curRating < a[i])
            {
                curRating++;
            }
            else if (curRating > a[i])
            {
                curRating--;
            }
            pre[i] = max(curRating, pre[i - 1]);
        }

        auto isPossible = [&](ll mid)
        {
            ll k = mid;
            for (int i = n; i >= 1; i--)
            {
                if (pre[i - 1] >= k)
                {
                    return true;
                }
                if (a[i] < k)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            return false;
        };

        ll ans = 0;
        ll l = 0, r = n + 1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (isPossible(mid))
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}