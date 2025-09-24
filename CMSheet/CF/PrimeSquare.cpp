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

const ll N = 1e5;
vector<bool> isPrime(N + 1, true);
void Primes()
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
}

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n, 1));
    ll x = n;
    ll i = n;
    while (1)
    {
        if (isPrime[i] && !isPrime[(i - (n - 1))])
        {
            x = i;
            break;
        }
        i++;
    }
    for (ll j = 0; j < n; j++)
    {
        a[j][j] = x - (n - 1);
    }
    for (auto &i : a)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Primes();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}