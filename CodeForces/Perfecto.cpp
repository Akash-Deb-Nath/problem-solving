#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

bool Perfect(ll n)
{
    ll r = (n * (n + 1)) / 2;
    ll temp = sqrt(r);
    if (temp * temp == r)
    {
        return 1;
    }
    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    if (Perfect(n))
    {
        cout << -1 << "\n";
        return;
    }
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (Perfect(i))
        {
            swap(a[i], a[i + 1]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
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