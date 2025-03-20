#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool binarySearch(ll a[], ll s, ll e, ll key)
{
    // Base case
    if (s > e)
    {
        return 0;
    }
    ll mid = s + (e - s) / 2;
    if (a[mid] == key)
    {
        return 1;
    }
    else if (a[mid] > key)
    {
        e = mid - 1;
    }
    else
    {
        s = mid + 1;
    }
    return binarySearch(a, s, e, key);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a[5] = {1, 2, 3, 5, 6};
    ll n = 5;
    ll s = 0;
    ll e = n;
    ll key = 2;
    bool ans = binarySearch(a, s, e, key);
    if (ans)
    {
        cout << "Paichi" << "\n";
    }
    else
    {
        cout << "Paichi na" << "\n";
    }

    return 0;
}