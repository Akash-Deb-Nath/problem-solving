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
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

const ll INF = 1e5;
vector<bool> isPrime(INF + 1, true);
void Primes(ll INF)
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= INF; i++)
    {
        if (isPrime[i] && (i * i <= INF))
        {
            for (ll j = i * i; j <= INF; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> primes;
    for (ll i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.pb(i);
        }
    }
    vector<ll> p(n);
    iota(all(p), 1);
    vector<bool> vis(n + 1, false);
    for (ll i = primes.size() - 1; i >= 0; i--)
    {
        auto prime = primes[i];
        vector<ll> a;
        for (ll j = prime; j <= n; j += prime)
        {
            if (!vis[j])
            {
                a.pb(j);
            }
        }
        if (a.size() >= 2)
        {
            for (ll k = 0; k < a.size(); ++k)
            {
                p[a[k] - 1] = a[(k + 1) % a.size()];
                vis[a[k]] = true;
            }
        }
    }
    for (auto i : p)
    {
        cout << i << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Primes(INF);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}