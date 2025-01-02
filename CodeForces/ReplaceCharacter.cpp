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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, ll> mp;
        ll mx = LONG_LONG_MIN, mn = LONG_LONG_MAX;
        for (auto &ch : s)
        {
            mp[ch]++;
        }
        for (auto &i : mp)
        {
            mx = max(mx, i.second);
            mn = min(mn, i.second);
        }
        char ch1, ch2 = s[0];
        for (auto it : mp)
        {
            if (it.second == mn)
            {
                ch1 = it.first;
            }
        }
        for (auto it : mp)
        {
            if (it.second == mx && it.first != ch1)
            {
                ch2 = it.first;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch1)
            {
                s[i] = ch2;
                break;
            }
        }
        cout << s << '\n';
    }

    return 0;
}