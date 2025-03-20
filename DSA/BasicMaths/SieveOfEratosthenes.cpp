#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll countPrimes(ll n)
{
    ll count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (ll j = 2 * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll ans = countPrimes(n);
    cout << ans << "\n";

    return 0;
}