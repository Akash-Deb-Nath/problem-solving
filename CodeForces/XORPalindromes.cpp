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
        ll i = 0, j = n - 1;
        ll notMatch = 0;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                notMatch++;
            }
            i++;
            j--;
        }
        string ans(n + 1, '0');
        for (ll i = notMatch; i <= n - notMatch; i += 2)
        {
            ans[i] = '1';
            if (n & 1)
            {
                ans[i + 1] = '1';
            }
        }
        cout << ans << "\n";
    }

    return 0;
}