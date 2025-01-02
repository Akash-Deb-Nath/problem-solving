#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        map<string, ll> Full;
        map<char, ll> First, Second;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> s;
            ans += First[s[0]] - Full[s];
            ans += Second[s[1]] - Full[s];
            Full[s]++;
            First[s[0]]++;
            Second[s[1]]++;
        }
        cout << ans << "\n";
    }

    return 0;
}