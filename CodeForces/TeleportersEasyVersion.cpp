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
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] + i + 1;
        }
        sort(a.begin(), a.end());
        ll temp = 0, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            temp = temp + a[i];
            if (temp <= c)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}