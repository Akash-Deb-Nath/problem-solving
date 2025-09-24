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
    vector<ll> p(n);
    ll Q = 0;
    for (auto &i : p)
    {
        cin >> i;
        Q = Q ^ i;
    }
    vector<ll> x(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        x[i] = i ^ x[i - 1];
    }
    for (ll i = 2; i <= n; i++)
    {
        ll p = n / i;
        ll r = n % i;
        if (p & 1)
        {
            Q ^= (x[r] ^ x[i - 1]);
        }
        else
        {
            Q ^= x[r];
        }
    }
    cout << Q << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}