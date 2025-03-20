#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll d = x + 1 - y;
    if (d >= 0 && d % 9 == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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