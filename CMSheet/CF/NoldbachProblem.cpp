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

const ll N = 1000;
vector<bool> isPrime(N + 1, true);
vector<ll> primes;
void prime(ll N)
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (isPrime[i] && (i * i <= N))
        {
            for (ll j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            primes.pb(i);
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll it = upper_bound(all(primes), n) - primes.begin();
    ll cnt = 0;
    for (ll i = 0; i + 1 < it; i++)
    {
        ll temp = primes[i] + primes[i + 1] + 1;
        if (isPrime[temp] && temp <= n)
        {
            cnt++;
        }
    }
    if (cnt >= k)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prime(N);
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}