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
    ll total = 0;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            a.pb((n - 1 - i) - i);
            total += i;
        }
        else
        {
            a.pb(i - (n - 1 - i));
            total += n - 1 - i;
        }
    }
    dsort(a);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            total += a[i];
        }
        cout << total << " ";
    }
    cout << '\n';
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