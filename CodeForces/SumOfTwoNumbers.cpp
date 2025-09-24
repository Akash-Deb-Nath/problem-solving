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
    auto s = to_string(n);
    string a, b;
    ll sum = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        ll v = s[i] - '0';
        ll x, y;
        if (sum > 0)
        {
            x = v / 2;
        }
        else
        {
            x = (v + 1) / 2;
        }
        y = v - x;
        a += '0' + x;
        b += '0' + y;
        sum += x - y;
    }
    ll x = stoi(a);
    ll y = stoi(b);
    cout << x << " " << y << "\n";
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