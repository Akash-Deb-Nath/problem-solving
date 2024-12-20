#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a.rbegin(), a.rend());
        ll sum = 0;
        for (auto &i : a)
        {
            if ((sum + i) <= k)
            {
                sum = sum + i;
            }
            else
            {
                break;
            }
        }
        ll ans = k - sum;
        cout << ans << endl;
    }

    return 0;
}