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
        bool flag1 = 0;
        for (ll i = 1; i <= 1024; i++)
        {
            vector<ll> b(n);
            for (ll j = 0; j < n; j++)
            {
                ll x = a[j] ^ i;
                b[j] = x;
            }
            bool flag = 1;
            sort(b.begin(), b.end());
            for (ll j = 0; j < n; j++)
            {
                if (a[j] != b[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << i << "\n";
                flag1 = 1;
                break;
            }
        }
        if (flag1 == 0)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}