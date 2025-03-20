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
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    ll i = 0;
    ll ans = 0;
    for (ll i = 0; i < n && x && k > 0; ++i)
    {
        if (s[i] == 'L')
        {
            x--;
        }
        else
        {
            x++;
        }
        k--;
    }
    ans = 0;
    if (x == 0)
    {
        ans++;
        if (k > 0)
        {
            while (i < n)
            {
                if (s[i] == 'L')
                {
                    x--;
                }
                else
                {
                    x++;
                }
                i++;
                if (x == 0)
                {
                    break;
                }
            }
            if (x == 0)
            {
                ans += k / i;
            }
        }
    }
    cout << ans << "\n";
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