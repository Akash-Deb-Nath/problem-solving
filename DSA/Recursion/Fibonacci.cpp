#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll fibonacci(ll n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    fibonacci(n);

    cout << "The " << n + 1 << "th Fibonacci number is: " << fibonacci(n) << "\n";

    return 0;
}