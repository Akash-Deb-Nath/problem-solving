#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll ans = 0;
    swap(a[0], a[k]);
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[0])
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    swap(a[0], a[k]);
    bool swapped = false;
    for (ll i = 0; i <= k; i++)
    {
        if (a[i] > a[k])
        {
            swap(a[i], a[k]);
            swapped = true;
            k = i;
            break;
        }
    }
    if (swapped)
    {
        ll r = 0;
        if (k > 0)
        {
            r++;
        }
        for (ll i = k + 1; i < n; i++)
        {
            if (a[k] > a[i])
            {
                r++;
            }
            else
            {
                break;
            }
        }
        ans = max(r, ans);
    }
    cout << ans << "\n";
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