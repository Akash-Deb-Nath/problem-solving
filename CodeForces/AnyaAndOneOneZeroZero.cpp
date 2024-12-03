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
        string check = "1100";

        for (ll i = 0; i < q; i++)
        {
            ll a;
            char b;
            cin >> a >> b;
            a -= 1;

            if (a >= 0 && a < s.size())
            {
                s[a] = b;
                if (s.find(check) != std::string::npos)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}
