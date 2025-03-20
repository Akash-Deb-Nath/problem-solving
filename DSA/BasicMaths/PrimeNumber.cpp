#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "It is a prime number" << "\n";
    }
    else
    {
        cout << "It is not a prime number" << "\n";
    }

    return 0;
}