#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll solve(vector<ll> a, ll index, ll group1, ll group2, ll n)
{
    // Base case
    if (index == n)
    {
        return abs(group1 - group2);
    }
    // Include the current element in group1
    ll choose = solve(a, index + 1, group1 + a[index], group2, n);
    // Include the current element in group2
    ll noChoose = solve(a, index + 1, group1, group2 + a[index], n);
    // Return the minimum difference between the two groups
    return min(choose, noChoose);
}

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
    ll index = 0;
    ll group1 = 0;
    ll group2 = 0;
    ll ans = solve(a, index, group1, group2, n);
    cout << ans << "\n";
    return 0;
}