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
    string s, k;
    cin >> s >> k;
    map<char, int> mp;
    for (int i = 0; i < k.size(); ++i)
    {
        ++mp[k[i]];
    }
    string w;
    for (int j = s.size() - 1; j >= 0; --j)
    {
        if (mp[s[j]] > 0)
        {
            --mp[s[j]];
            w += s[j];
        }
    }
    reverse(w.begin(), w.end());
    cout << (k == w ? "YES\n" : "NO\n");
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