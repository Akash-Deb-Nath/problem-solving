#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n - 2; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i + 3 < n; i++)
    {
        if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1)
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