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
        vector<ll> a(n);
        bool even = 0, odd = 0;
        for (auto &i : a)
        {
            cin >> i;
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even = 1;
            }
            else
            {
                odd = 1;
            }
        }
        if (even && odd)
        {
            cout << -1 << "\n";
        }
        else
        {
            vector<ll> ans;
            for (ll i = 29; i >= 0; i--)
            {
                ans.push_back(1 << i);
            }
            if (even)
            {
                ans.push_back(1);
            }
            cout << ans.size() << "\n";
            for (auto &i : ans)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}