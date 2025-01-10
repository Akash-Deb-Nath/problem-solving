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
        string s1, s2;
        cin >> s1 >> s2;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                ans += 2;
            }
            else if ((s1[i] == '1' && s2[i] == '1') && i + 1 <= n - 1)
            {
                if (s1[i + 1] == '0' && s2[i + 1] == '0')
                {
                    ans += 2;
                    i++;
                }
            }
            else if ((s1[i] == '0' && s2[i] == '0') && i + 1 <= n - 1)
            {
                if (s1[i + 1] == '1' && s2[i + 1] == '1')
                {
                    ans += 2;
                    i++;
                }
                else
                {
                    ans++;
                }
            }
            else if (s1[i] == '0' && s2[i] == '0')
            {
                ans += 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}