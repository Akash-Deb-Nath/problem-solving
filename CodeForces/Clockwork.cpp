#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (ll i = 0; i < n; i++)
    {
        ll d = max(i, n - 1 - i);
        if (a[i] <= 2 * d)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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