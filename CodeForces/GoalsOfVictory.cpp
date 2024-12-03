#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n - 1);
        ll ans = 0;
        for (auto &it : a)
        {
            cin >> it;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ans = ans + a[i];
        }
        cout << -ans << endl;
    }

    return 0;
}
