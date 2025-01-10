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
        for (ll i = 0; i < 9; i++)
        {
            string s;
            cin >> s;
            ll temp = (i % 3) * 3;
            if (i < 3)
            {
                s[temp] = s[temp + 1];
            }
            else if (i >= 3 && i < 6)
            {
                s[temp + 1] = s[temp + 2];
            }
            else
            {
                s[temp + 2] = s[temp];
            }
            cout << s << "\n";
        }
    }

    return 0;
}