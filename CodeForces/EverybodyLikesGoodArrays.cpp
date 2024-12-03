#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        ll ans = 0;
        for (ll i = 0; i + 1 < n; i++)
        {
            if ((a[i] - a[i + 1]) % 2 == 0)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}