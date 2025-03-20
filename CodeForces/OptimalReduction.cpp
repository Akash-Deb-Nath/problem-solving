#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0, index = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            index = i;
        }
    }
    bool flag = 1;
    for (ll i = 0; i + 1 <= index; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = 0;
            break;
        }
    }
    for (ll i = index + 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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