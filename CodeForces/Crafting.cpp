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
        vector<ll> b(n);
        for (auto &i : b)
        {
            cin >> i;
        }
        ll temp = 0, minDiff = LONG_LONG_MAX, maxDiff = LONG_LONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                temp++;
                maxDiff = max(maxDiff, abs(a[i] - b[i]));
            }
            else
            {
                minDiff = min(minDiff, abs(a[i] - b[i]));
            }
        }
        if ((temp <= 1) && (maxDiff <= minDiff))
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}