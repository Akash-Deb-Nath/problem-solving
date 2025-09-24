#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < 59; i++)
    {
        ll group = 1ll << (i + 1);
        ll totalGroups = (n + 1) / group;
        ll rem = (n + 1) % group;
        ans += totalGroups * (1ll << i);
        ans += max(0LL, rem - (1ll << i));
    }
    cout << ans << endl;

    return 0;
}