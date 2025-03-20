#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll l = 0, r = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll mx = 0, mn = 0;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                mx++;
            }
            else if (a[j] < a[i])
            {
                mn++;
            }
            if (mx - mn < ans)
            {
                ans = mx - mn;
                l = i;
                r = j;
            }
        }
    }
    cout << l + 1 << " " << r + 1 << "\n";
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