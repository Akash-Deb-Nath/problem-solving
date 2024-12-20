#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool isPossible(vector<ll> a, ll n, ll res, ll mid)
{
    double avr = (double)(res + mid) / (double)n;
    avr = avr / 2.0;
    ll half = n / 2;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < avr)
        {
            count++;
        }
    }
    if (count > half)
    {
        return true;
    }
    return false;
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        if (n < 3)
        {
            cout << -1 << endl;
            continue;
        }
        ll res = 0;
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            res = res + a[i];
        }
        ll s = 0, e = 1e12;
        ll ans = -1;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (isPossible(a, n, res, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}