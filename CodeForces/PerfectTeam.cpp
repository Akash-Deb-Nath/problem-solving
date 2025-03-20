#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll c, m, x;
    cin >> c >> m >> x;
    // O(1) Time Complexity te kora jay
    // cout << min(c, min(m, (c + m + x) / 3)) << "\n";
    // Using Binary Search to learn how to implement Binary Search for the problem
    ll n = c + m + x;
    ll l = 0;
    ll r = n / 3 + 1;
    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (mid <= c && mid <= m && mid * 3 <= n)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << "\n";
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