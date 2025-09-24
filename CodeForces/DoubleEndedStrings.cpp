#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll res = s1.size() + s2.size();
    for (ll len = 0; len < s1.size(); ++len)
    {
        for (ll i = 0; i + len < s1.size(); ++i)
        {
            for (ll j = 0; j + len < s2.size(); ++j)
            {
                bool f = true;
                for (ll k = i, kk = j; k <= (i + len); ++k, ++kk)
                {
                    if (s1[k] != s2[kk])
                    {
                        f = false;
                        break;
                    }
                }
                if (f)
                {
                    res = min(res, s1.size() - len - 1 + s2.size() - len - 1);
                }
            }
        }
        cout << res << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}