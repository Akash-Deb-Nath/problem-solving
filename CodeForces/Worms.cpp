#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll m;
    cin >> m;
    vector<ll> b(m);
    for (auto &i : b)
    {
        cin >> i;
    }
    vector<ll> prefixSum(n);
    prefixSum[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        ll ans = -1;
        ll s = 0, e = n - 1;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (prefixSum[mid] >= b[i])
            {
                ans = mid + 1;
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
