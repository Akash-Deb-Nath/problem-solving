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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        ll ans = 0;
        for (ll &i : a)
        {
            cin >> i;
        }
        vector<ll> b(m);
        for (auto &i : b)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a[0] < b[m - 1])
        {
            swap(a[0], b[m - 1]);
        }
        k--;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (auto &i : a)
        {
            ans = ans + i;
        }
        if (k & 1)
        {
            ans = ans - a.back();
            ans = ans + b[0];
        }
        cout << ans << endl;
    }
    return 0;
}