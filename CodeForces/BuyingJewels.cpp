#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n != k && k > (n + 1) / 2)
    {
        cout << "NO" << "\n";
        return;
    }
    else
    {
        cout << "YES" << "\n";
        cout << 2 << "\n";
        cout << n - k + 1 << " " << 1 << "\n";
        return;
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