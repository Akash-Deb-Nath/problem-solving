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
        ll n, s, m;
        cin >> n >> s >> m;
        vector<ll> l(n);
        vector<ll> r(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }
        ll temp = 0;
        ll gap = 0;
        ll flag = 0;
        ll x = 0;
        for (ll i = 0; i <= n; i++)
        {
            if (i == n)
            {
                x = m;
            }
            else
            {
                x = l[i];
            }
            gap = x - temp;
            temp = r[i];
            if (gap >= s)
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}