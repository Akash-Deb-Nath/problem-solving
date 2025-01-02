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
        ll ans = 0;
        int i = n / 2;
        while (i >= 0 && s[i] == s[n / 2])
        {
            ans++, i--;
        }
        i = n / 2 + 1;
        while (i < n && s[i] == s[n / 2])
        {
            ans++, i++;
        }
        cout << ans << "\n";
    }

    return 0;
}