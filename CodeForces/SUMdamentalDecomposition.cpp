#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    int n, x;
    cin >> n >> x;

    if (x == 0)
    {
        if (n == 1)
        {
            cout << -1 << "\n";
        }
        else if (n % 2 == 0)
        {
            cout << n << "\n";
        }
        else
        {
            cout << n + 3 << "\n";
        }
        return;
    }
    if (x == 1)
    {
        if (n % 2 == 0)
        {
            cout << n + 3 << "\n";
        }
        else
        {
            cout << n << "\n";
        }
        return;
    }
    ll ans = x;
    ll p = __builtin_popcount(x);
    ans += (max(0ll, n - p) + 1) / 2 * 2;
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