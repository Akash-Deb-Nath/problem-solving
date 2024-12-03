#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> a(26, 0);
        for (ll i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        ll odd = 0;
        for (auto i : a)
        {
            odd = odd + (i & 1);
        }
        if (odd <= k + 1)
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