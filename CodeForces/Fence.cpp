#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (auto &i : h)
    {
        cin >> i;
    }
    vector<ll> p(n + 1);
    for (ll i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + h[i];
    }
    ll ans = 0;
    ll mn = 1e18;
    for (ll i = 0; i <= n - k; i++)
    {
        if (p[i + k] - p[i] < mn)
        {
            mn = p[i + k] - p[i];
            ans = i;
        }
    }
    cout << ans + 1 << "\n";

    return 0;
}