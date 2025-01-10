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
        string t;
        cin >> t;
        ll zero = count(s.begin(), s.end(), '0');
        ll one = n - zero;
        bool flag = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            if (zero == 0 || one == 0)
            {
                flag = 0;
                break;
            }
            if (t[i] == '1')
            {
                zero--;
            }
            else
            {
                one--;
            }
        }
        if (flag)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}