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
        ll ans = s.length();
        ll one = 0, zero = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                one--;
            }
            else
            {
                zero--;
            }
            if (zero < 0 || one < 0)
            {
                break;
            }
            ans--;
        }
        cout << ans << endl;
    }

    return 0;
}
