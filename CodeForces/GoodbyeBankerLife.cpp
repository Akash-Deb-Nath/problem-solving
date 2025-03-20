#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        if (((n - 1) & i) == i)
        {
            cout << k << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    cout << "\n";
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