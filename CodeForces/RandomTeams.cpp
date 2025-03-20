#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll d = 0, x = 0, ans = 0;
    x = n / m;
    d = n % m;
    ans = ((d * (x + 1) * x) / 2) + (((m - d) * x * (x - 1)) / 2);
    cout << ans << " ";
    cout << (n - m + 1) * (n - m) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}