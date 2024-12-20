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
        ll q;
        cin >> q;
        ll n = s.size();
        ll count = 0;
        for (ll i = 0; i < n - 3; i++)
        {
            if (s.substr(i, 4) == "1100")
            {
                count++;
            }
        }
        while (q--)
        {
            ll a;
            char b;
            cin >> a >> b;
            a--;
            for (ll i = a - 3; i < a + 1; i++)
            {
                if (i < 0 || i + 3 > n)
                {
                    continue;
                }
                if (s.substr(i, 4) == "1100")
                {
                    count--;
                }
            }
            s[a] = b;
            for (ll i = a - 3; i < a + 1; i++)
            {
                if (i < 0 || i + 3 > n)
                {
                    continue;
                }
                if (s.substr(i, 4) == "1100")
                {
                    count++;
                }
            }
            if (count > 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
