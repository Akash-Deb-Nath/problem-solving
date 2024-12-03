#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (ll i = 1; i < s.length(); i++)
        {
            if (s[i - 1] != s[i])
            {
                ans++;
            }
        }
        if (is_sorted(s.begin(), s.end()))
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << max(ans, 2) << '\n';
        }
    }

    return 0;
}