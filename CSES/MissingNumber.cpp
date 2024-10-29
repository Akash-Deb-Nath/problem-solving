#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    ll res = 0;
    ll temp = n * (n + 1) / 2;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        res = res + a[i];
    }
    ll ans = temp - res;
    cout << ans << endl;

    return 0;
}