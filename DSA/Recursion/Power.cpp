#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll power(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * power(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ll ans = power(n);
    cout << ans << "\n";
    return 0;
}