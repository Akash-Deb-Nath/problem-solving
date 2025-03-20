#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> pref(n + 1);
    for (int i = 0; i < n; ++i)
    {
        pref[i + 1] = pref[i] + a[i];
    }
    ll sum = 0;
    for (int i = k; i <= n; ++i)
    {
        sum += pref[i] - pref[i - k];
    }
    double ans = 1.0 * sum / (n - k + 1);
    cout << fixed << setprecision(6) << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}