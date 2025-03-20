#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    set<ll> s;
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            s.insert(i.first);
        }
    }
    ll mx = 0, L = -1, R = -1;
    for (ll i = 0, j = 0; j < n; j++)
    {
        if (s.count(a[j]) == 0)
        {
            i = j + 1;
        }
        else
        {
            ll len = j - i + 1;
            if (len > mx)
            {
                mx = len;
                L = i;
                R = j;
            }
        }
    }
    if (mx == 0)
    {
        cout << 0 << "\n";
        return;
    }
    else
    {
        cout << L + 1 << " " << R + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}