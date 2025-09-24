#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll digitSumGCD(ll n)
{
    ll temp = n, sum = 0;
    while (temp)
    {
        ll digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    ll g = __gcd(n, sum);
    return g;
}

void solve()
{
    ll n;
    cin >> n;
    if (digitSumGCD(n) != 1)
    {
        cout << n << "\n";
    }
    else if (digitSumGCD(n + 1) != 1)
    {
        cout << n + 1 << "\n";
    }
    else if (digitSumGCD(n + 2) != 1)
    {
        cout << n + 2 << "\n";
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