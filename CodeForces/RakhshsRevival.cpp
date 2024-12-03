#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    ll i = 0, ans = 0, temp = 0;
    while (i < n)
    {
        if (s[i] == '0')
        {
            temp++;
            if (temp >= m)
            {
                temp = 0;
                ans++;
                i = i + k - 1;
            }
        }
        else
        {
            temp = 0;
        }
        i++;
    }
    cout << ans << endl;
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
