#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

ll factorial(ll n)
{
    ll r = 1;
    for (ll i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = factorial(n - 1);
    ll temp = n / 2;
    ans = ans / temp;
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