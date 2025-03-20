#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll sum(ll a[], ll n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }
    /*
        if (n == 1)
        {
            return a[0];
        }
        ll remainingPart = sum(a + 1, n - 1);
        ll sum = a[0] + remainingPart;
        return sum;
    */
    // Recursive Case
    return a[n - 1] + sum(a, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n = 5;
    ll a[5] = {2, 4, 9, 9, 9};
    ll ans = sum(a, n);
    cout << ans << "\n";
    return 0;
}