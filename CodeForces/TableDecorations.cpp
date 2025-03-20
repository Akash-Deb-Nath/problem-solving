#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll r, g, b;
    cin >> r >> g >> b;
    ll ans = min((r + g + b) / 3, r + g + b - max(r, max(g, b)));
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}