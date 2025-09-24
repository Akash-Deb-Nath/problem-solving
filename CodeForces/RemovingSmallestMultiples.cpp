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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> exists(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            exists[i + 1] = 1;
        }
    }
    ll cost = 0;
    vector<bool> removed(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
        {
            if (exists[j])
            {
                break;
            }
            if (!removed[j])
            {
                cost += i;
                removed[j] = 1;
            }
        }
    }
    cout << cost << "\n";
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