#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll total = n * (n + 1) / 2;
    ll sum = 0;
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
    }
    ll last = total - sum;
    a.push_back(last);
    k = k % (n + 1);
    rotate(a.begin(), a.begin() + (n + 1) - k, a.end());
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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