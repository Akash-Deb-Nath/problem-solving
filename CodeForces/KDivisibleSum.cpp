#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = (n + k - 1) / k;
        ll temp = x * k;
        ll ans = (temp + n - 1) / n;
        cout << ans << endl;
    }

    return 0;
}