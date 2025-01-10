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
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        ll m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "No" << "\n";
                continue;
            }
            map<ll, char> mp;
            map<char, ll> rev;
            bool bad = false;
            for (ll i = 0; i < n; i++)
            {
                if ((mp.find(a[i]) != mp.end() && mp[a[i]] != s[i]) || (rev.find(s[i]) != rev.end() && rev[s[i]] != a[i]))
                {
                    bad = true;
                }
                else
                {
                    mp[a[i]] = s[i];
                    rev[s[i]] = a[i];
                }
            }
            cout << (bad ? "NO\n" : "YES\n");
        }
    }

    return 0;
}