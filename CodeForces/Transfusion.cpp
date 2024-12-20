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
        ll evenSum = 0, oddSum = 0;
        ll evenSize = n / 2;
        ll oddSize = n - evenSize;
        for (auto &i : a)
        {
            cin >> i;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                oddSum += a[i - 1];
            }
            else
            {
                evenSum += a[i - 1];
            }
        }
        ll evenAvg = evenSum / evenSize;
        ll oddAvg = oddSum / oddSize;
        if (evenAvg == oddAvg && evenSum % evenSize == 0 && oddSum % oddSize == 0)
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