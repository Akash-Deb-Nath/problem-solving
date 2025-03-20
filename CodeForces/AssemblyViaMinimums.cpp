#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll size = n * (n - 1) / 2;
    vector<ll> a(size);
    ll mx = LONG_LONG_MIN;
    for (auto &i : a)
    {
        cin >> i;
        mx = max(mx, i);
    }
    sort(a.begin(), a.end());
    vector<ll> b(n);
    ll index = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        b[i] = a[index];
        index += (n - 1 - i);
    }
    b[n - 1] = mx;
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << "\n";
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