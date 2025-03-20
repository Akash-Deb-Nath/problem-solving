#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void PrimeFactors(ll x, map<ll, ll> &divisors)
{
    for (ll i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            x /= i;
            divisors[i]++;
        }
    }
    if (x > 1)
    {
        divisors[x]++;
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> divisors;
    for (auto &i : a)
    {
        cin >> i;
        PrimeFactors(i, divisors);
        cout << "Divisors of " << i << "\n";
        for (auto &j : divisors)
        {
            cout << j.first << " " << j.second << "\n";
        }
        cout << "Checking divisibility" << "\n";
    }
    for (auto &i : a)
    {
    }
    for (auto &i : divisors)
    {
        if (i.second % n != 0)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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