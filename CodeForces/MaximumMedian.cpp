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
    sort(a.begin(), a.end());
    ll s = 0, e = 2e9 + 5;
    while (s < e - 1)
    {
        ll ans = 0;
        ll mid = s + (e - s) / 2;
        for (ll i = n / 2; i < n; i++)
        {
            ans += max(0ll, mid - a[i]);
        }
        if (ans <= k)
        {
            s = mid;
        }
        else
        {
            e = mid;
        }
    }
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}