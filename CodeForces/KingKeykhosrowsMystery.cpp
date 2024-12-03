#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << (a * b) / __gcd(a, b) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
