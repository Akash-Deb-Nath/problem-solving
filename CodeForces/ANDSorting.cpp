#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = -1;
        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
            if (p[i] != i)
            {
                ans &= i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}