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
        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << "\n";
            continue;
        }
        map<ll, ll> mnIndex;
        for (ll i = 0; i < n; i++)
        {
            if (mnIndex.find(a[i]) == mnIndex.end())
            {
                mnIndex[a[i]] = i;
            }
        }
        ll index = -1;
        for (ll i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i - 1])
            {
                index = i - 1;
                break;
            }
        }
        ll ans = mnIndex.size();
        set<ll> saved;
        for (ll i = n - 1; i >= index + 1; i--)
        {
            if (mnIndex[a[i]] <= index)
            {
                break;
            }
            saved.insert(a[i]);
        }
        ans -= saved.size();
        cout << ans << "\n";
    }

    return 0;
}