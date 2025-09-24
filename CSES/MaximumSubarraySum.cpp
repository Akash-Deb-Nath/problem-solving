#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll currentSum = 0, maxSum = LONG_LONG_MIN;
    for (auto &i : a)
    {
        currentSum += i;
        maxSum = max(maxSum, currentSum);
        currentSum = max(0ll, currentSum);
    }
    cout << maxSum << "\n";

    return 0;
}