#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    if (n & 1)
    {
        cout << ans << "\n";
        return;
    }
    ans = (n + 4 - 1) / 4 - 1;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}