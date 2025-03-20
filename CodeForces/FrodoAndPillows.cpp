#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

ll count(ll mid, ll n, ll k)
{
    ll sum = 0;
    ll x = abs(mid - k);
    if (mid >= k)
    {
        sum += (mid * (mid + 1)) / 2 - (x * (x + 1)) / 2;
    }
    else
    {
        sum += (mid * (mid + 1)) / 2 + x;
    }
    k = n - k + 1;
    x = abs(mid - k);
    if (mid >= k)
    {
        sum += (mid * (mid + 1)) / 2 - (x * (x + 1)) / 2;
    }
    else
    {
        sum += (mid * (mid + 1)) / 2 + x;
    }
    return sum - mid;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1, r = m;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll temp = count(mid, n, k);
        if (temp <= m)
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}