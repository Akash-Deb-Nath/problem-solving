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
        string s;
        cin >> n >> s;
        vector<ll> pref(n, 0), suff(n, 0);
        set<char> temp;
        for (ll i = 0; i < n; i++)
        {
            temp.insert(s[i]);
            pref[i] = temp.size();
        }
        temp.clear();
        for (ll i = n - 1; i >= 0; i--)
        {
            temp.insert(s[i]);
            suff[i] = temp.size();
        }
        ll ans = 0;
        for (ll i = 0; i + 1 < n; i++)
        {
            ans = max(ans, pref[i] + suff[i + 1]);
        }
        cout << ans << endl;
    }

    return 0;
}