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
    if (n % 2 == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (j - i <= n / 2)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
        }
        cout << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (j - i < n / 2)
                {
                    cout << 1 << " ";
                }
                else if (j - i == n / 2)
                {
                    cout << 0 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
        }
        cout << endl;
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