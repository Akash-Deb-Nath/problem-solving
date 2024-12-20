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
        vector<ll> a(n);
        map<ll, ll> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        for (ll i = 0; i < n; i++)
        {
            if (mp[k] >= 1)
            {
                cout << "Yes" << endl;
                break;
            }
            else
            {
                cout << "No" << endl;
                break;
            }
        }
    }
    return 0;
}