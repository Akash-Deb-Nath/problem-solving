#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll sum = 15;
    ll temp = a + b + c + d;
    ll ans = sum - temp;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    solve();
    return 0;
}