#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> count(n + 1, 0);
        vector<ll> ans(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= n)
            {
                count[x]++;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i; j <= n; j += i)
            {
                ans[j] += count[i];
            }
        }
        cout << *max_element(ans.begin(), ans.end()) << endl;
    }

    return 0;
}