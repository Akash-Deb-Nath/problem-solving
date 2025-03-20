#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

bool isPossible(vector<ll> &a, ll mid, ll h)
{
    vector<ll> temp(a.begin(), a.begin() + mid);
    sort(temp.rbegin(), temp.rend());

    ll requiredHeight = 0;
    for (ll i = 0; i < mid; i += 2)
    {
        requiredHeight += temp[i];
    }

    return requiredHeight <= h;
}

void solve()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    ll l = 0, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (isPossible(a, mid, h))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
