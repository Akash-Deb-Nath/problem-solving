#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q;
    cin >> n >> q;
    vector<ll> x(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    vector<ll> pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + x[i - 1];
    }
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = pre[b] - pre[a - 1];
        cout << ans << "\n";
    }

    return 0;
}