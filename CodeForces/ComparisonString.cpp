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
        ll temp = 1;
        ll ans = 2;
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                temp++;
                ans = max(ans, temp + 1);
            }
            else
            {
                temp = 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}