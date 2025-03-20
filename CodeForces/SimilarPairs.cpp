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
        ll even = 0, odd = 0;
        for (auto &i : a)
        {
            cin >> i;
            if (i % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even % 2 == 0 && odd % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            sort(a.begin(), a.end());
            ll cnt = 0;
            for (ll i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] == 1)
                {
                    cnt++;
                }
            }
            if (cnt >= 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}