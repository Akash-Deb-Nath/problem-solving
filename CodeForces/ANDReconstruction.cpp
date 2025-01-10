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
        vector<ll> b(n - 1);
        for (auto &i : b)
        {
            cin >> i;
        }
        vector<ll> a(n);
        a[0] = b[0];
        a[n - 1] = b[n - 2];
        for (ll i = 1; i < n - 1; i++)
        {
            a[i] = b[i] | b[i - 1];
        }
        bool flag = 1;
        for (ll i = 0; i + 1 < n; i++)
        {
            if ((a[i] & a[i + 1]) != b[i])
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << "\n";
            continue;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}