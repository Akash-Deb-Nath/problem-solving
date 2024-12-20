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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = 1;
        }
        vector<ll> b;
        for (ll i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                b.push_back(i);
            }
        }
        ll j = 0;
        for (ll i = 0; i < n; i++)
        {
            if (mp[a[i]] == 0)
            {
                a[i] = b[j];
                j++;
            }
            mp[a[i]] = 0;
        }

        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}