#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        string t;
        cin >> t;
        ll n = t.size();
        string zero(n, '0');
        string one(n, '1');
        if (t == zero || t == one)
        {
            cout << t << "\n";
        }
        else
        {
            string s(2 * n, '0');
            for (ll i = 0; i < n; i++)
            {
                s[2 * i] = '1';
            }
            cout << s << "\n";
        }
    }

    return 0;
}