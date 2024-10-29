#include <bits/stdc++.h>

using namespace std;

#define ll long long int
const ll MOD = 1000000007;

// Function to perform modular exponentiation
ll bitStrings(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp & 1) // Checking last bit is 1 or 0
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod; // Increment base value by squaring it
        exp >>= 1;                  // Decrease exponent
    }
    return result;
}

int main()
{
    ll n;
    cin >> n;

    // Compute 2^n % 1000000007 using modular exponentiation
    ll ans = bitStrings(2, n, MOD);
    cout << ans << endl;

    return 0;
}
