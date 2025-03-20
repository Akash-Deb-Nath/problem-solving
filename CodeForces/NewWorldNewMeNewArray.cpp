#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n, k, p;
    cin >> n >> k >> p;
    if (abs(p) * n < abs(k))
    {
        cout << -1 << "\n";
        return;
    }
    ll ans = (abs(k) + abs(p) - 1) / abs(p);
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}