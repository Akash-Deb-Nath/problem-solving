#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            ans += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << ans << endl;

    return 0;
}