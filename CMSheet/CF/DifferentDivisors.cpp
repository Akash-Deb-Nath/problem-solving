#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

const ll n = 200000;
vector<bool> isPrime(n + 1, true);
vector<ll> primes;

void prime(ll n)
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (isPrime[i] && (i * i <= n))
        {
            for (ll j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

void solve()
{
    ll d;
    cin >> d;
    ll x = *lower_bound(all(primes), 1 + d);
    ll y = *lower_bound(all(primes), x + d);
    ll ans = x * y;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    prime(n);
    while (t--)
    {
        solve();
    }

    return 0;
}