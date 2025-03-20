#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt1 = 0, cnt2 = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    if (cnt1 < 2 || cnt2 == 0)
    {
        cout << 0 << "\n";
        return;
    }
    ll temp = (cnt1 * cnt1) / 4;
    ans = temp * cnt2;
    cout << ans << endl;
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