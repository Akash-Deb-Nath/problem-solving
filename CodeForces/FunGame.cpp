#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        ll flag = 1;
        for (ll i = 0; i < n && s[i] == '0'; i++)
        {
            if (t[i] == '1')
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}