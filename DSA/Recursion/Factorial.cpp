#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll Factorial(ll n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    // Recursive case
    return n * Factorial(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ll ans = Factorial(n);
    cout << ans << "\n";
    return 0;
}