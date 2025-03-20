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
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        ll k = -1;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                k = i;
            }
        }
        if (k == -1)
        {
            cout << -1 << "\n";
            continue;
        }
        ll x = a[k];
        a.erase(a.begin() + k);
        a.erase(a.begin() + k - 1);
        bool flag = 0;
        for (ll i = 1; i < a.size(); i++)
        {
            if (2 * x > a[i] - a[i - 1])
            {
                flag = 1;
                cout << x << " " << x << " " << a[i - 1] << " " << a[i] << "\n";
                break;
            }
        }
        if (flag)
        {
            continue;
        }

        cout << -1 << "\n";
    }

    return 0;
}