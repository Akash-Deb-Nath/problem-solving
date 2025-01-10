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
        for (ll i = 1; i + 1 < n; i++)
        {
            if (s[i - 1] == '0' && s[i] == '1' && s[i + 1] == '0')
            {
                s[i] = '0';
            }
        }
        ll zero = count(s.begin(), s.end(), '0');
        if (zero == n)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}