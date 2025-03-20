#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool isSorted(ll a[], ll n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        ll remainingPart = isSorted(a + 1, n - 1);
        return remainingPart;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n = 5;
    ll a[5] = {2, 4, 6, 8, 9};
    if (isSorted(a, n))
    {
        cout << "The array is sorted" << "\n";
    }
    else
    {
        cout << "The array is not sorted" << "\n";
    }

    return 0;
}