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
        ll sub = 0, nonZeroFlag = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                nonZeroFlag = 1;
            }
            else if (nonZeroFlag)
            {
                sub++;
                nonZeroFlag = 0;
            }
        }
        if (nonZeroFlag)
        {
            sub++;
        }

        if (sub == 0)
        {
            cout << 0 << endl;
        }
        else if (sub > 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}