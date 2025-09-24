#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll solve(vector<ll> &a, ll n, ll k)
{
    deque<ll> dmax(k);
    deque<ll> dmin(k);
    for (ll i = 0; i < k; i++)
    {
        while (!dmax.empty() && a[dmax.back()] <= a[i])
        {
            dmax.pop_back();
        }
        while (!dmin.empty() && a[dmin.back()] >= a[i])
        {
            dmin.pop_back();
        }
        dmax.push_back(i);
        dmin.push_back(i);
    }
    ll ans = 0;
    for (ll i = k; i < n; i++)
    {
        ans += a[dmax.front()] + a[dmin.front()];
        while (!dmax.empty() && i - dmax.front() >= k)
        {
            dmax.pop_front();
        }
        while (!dmin.empty() && i - dmin.front() >= k)
        {
            dmin.pop_front();
        }
        while (!dmax.empty() && a[dmax.back()] <= a[i])
        {
            dmax.pop_back();
        }
        while (!dmin.empty() && a[dmin.back()] >= a[i])
        {
            dmin.pop_back();
        }
        dmax.push_back(i);
        dmin.push_back(i);
    }
    ans += a[dmax.front()] + a[dmin.front()];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> a = {2, 5, -1, 7, -3, -1, -2};
    ll n = 7;
    ll k = 4;
    ll ans = solve(a, n, k);
    cout << ans << "\n";

    return 0;
}