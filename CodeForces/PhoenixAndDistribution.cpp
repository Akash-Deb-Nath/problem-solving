#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string t;
    int i = 0;
    while (i < n && s[0] == s[i])
    {
        ++i;
    }
    if (i < k)
    {
        t = s[k - 1];
    }
    else if (i == n)
    {
        t = string((n + k - 1) / k, s[0]);
    }
    else if (i > k)
    {
        t = s[0] + s.substr(k, n);
    }
    else if (s[i] == s.back())
    {
        t = s[0] + string((n - 1) / k, s[i]);
    }
    else
    {
        t = s[0] + s.substr(k, n);
    }
    cout << t << "\n";
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