#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 1e18;
    for (ll i = 0; i < n; i++)
    {
        if (((s[i] - '0') % 2 == 0) && (s[i] - '0') < (s[n - 1] - '0'))
        {
            swap(s[i], s[n - 1]);
            cout << s << "\n";
            return;
        }
        if ((s[i] - '0') % 2 == 0)
        {
            ans = i;
        }
    }
    if (ans != 1e18)
    {
        swap(s[ans], s[n - 1]);
        cout << s << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}