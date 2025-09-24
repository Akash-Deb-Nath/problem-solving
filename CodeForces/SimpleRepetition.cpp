#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

bool isPrimeSieve(ll n)
{
    if (n < 2)
    {
        return 0;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    string x;
    ll k;
    cin >> x >> k;
    if (stoi(x) > 1 && k > 1)
    {
        cout << "NO\n";
        return;
    }
    string y;
    while (k--)
    {
        y += x;
    }
    ll n = stoi(y);
    if (isPrimeSieve(n))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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