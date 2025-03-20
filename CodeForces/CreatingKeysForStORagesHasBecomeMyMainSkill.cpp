#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll flag = 0;
    ll Or = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if ((x | i) == x && !flag)
        {
            cout << i << " ";
            Or |= i;
        }
        else
        {
            flag = 1;
            cout << 0 << " ";
        }
    }
    if (!flag && (Or | n - 1) == x)
    {
        cout << n - 1 << "\n";
    }
    else
    {
        cout << x << "\n";
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