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
        string s;
        cin >> s;
        ll n = s.size();
        ll index = n - 1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                index = i;
                break;
            }
        }
        ll l2 = n - 1;
        ll i = index, j = index - 1;
        while (i < n && j >= 0)
        {
            if (s[i] != s[j])
            {
                l2 = j;
            }
            else if (s[i] == s[j] && s[i] == '0')
            {
                l2 = j;
            }
            else
            {
                break;
            }
            i++;
            j--;
        }

        ll sub = (index - l2);

        cout << 1 << " " << n << " " << l2 + 1 << " " << (n - sub) << endl;
    }

    return 0;
}