#include "bits/stdc++.h"

using namespace std;

#define ll long long

const ll INF = 2e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (ll &i : a)
        {
            cin >> i;
        }
        ll l = 0, r = 1e9;
        while (l != r)
        {
            ll mid = (l + r) / 2;
            ll total = 0;
            for (int i = 0; i < n; i++)
            {
                ll temp = a[i] + mid + mid;
                total = min(INF, total + (temp * temp));
            }
            if (total < c)
                l = mid + 1;
            else
                r = mid;
        }
        cout << l << "\n";
    }
}