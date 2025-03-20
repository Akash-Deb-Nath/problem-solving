#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt += (s[i] == c);
    }
    if (cnt == n)
    {
        cout << 0 << '\n';
        return;
    }
    bool found = false;
    for (ll d = 1; d <= n; d++)
    {
        ll cc = 0;
        for (ll i = d; i <= n; i += d)
        {
            cc += (s[i - 1] != c);
        }
        if (cc == 0)
        {
            cout << 1 << '\n';
            cout << d << '\n';
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << 2 << '\n';
        cout << n - 1 << " " << n << '\n';
    }
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