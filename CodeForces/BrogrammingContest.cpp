#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll zero = count(s.begin(), s.end(), '0');
    if (zero == 0)
    {
        cout << 1 << "\n";
        return;
    }
    else if (zero == n)
    {
        cout << 0 << "\n";
        return;
    }
    ll ans = 0;
    if (s[0] == '0')
    {
        ans = 0;
    }
    else
    {
        ans = 1;
    }
    for (ll i = 0; i + 1 < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            ans++;
        }
    }
    cout << ans << "\n";
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