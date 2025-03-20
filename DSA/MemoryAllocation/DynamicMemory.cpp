#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll getSum(ll *arr, ll n)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    // Creating variable size array
    ll *arr = new ll[n];

    // Taking input in array
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = getSum(arr, n);

    cout << "Answer is = " << ans << "\n";

    return 0;
}