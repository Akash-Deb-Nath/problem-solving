#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll range = r - l + 1;
    ll temp = l - 1;
    range = min(range, r);
    range = min(range, n - temp);
    vector<ll> left, right;
    for (ll i = 0; i < r; i++)
    {
        left.push_back(a[i]);
    }
    for (ll i = temp; i < n; i++)
    {
        right.push_back(a[i]);
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    ll leftSum = 0, rightSum = 0;
    for (ll i = 0; i < range; i++)
    {
        if (i < left.size())
        {
            leftSum += left[i];
        }
        if (i < right.size())
        {
            rightSum += right[i];
        }
    }
    cout << min(leftSum, rightSum) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
