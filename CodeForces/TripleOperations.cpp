#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

#define N 200005

vector<ll> preCompute(N + 1);

void prefix()
{
    for (ll i = 1; i <= N; i++)
    {
        ll num = i, count = 0;
        while (num > 0)
        {
            num /= 3;
            count++;
        }
        preCompute[i] = preCompute[i - 1] + count;
    }
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ans = (preCompute[r] - preCompute[l - 1]) + (preCompute[l] - preCompute[l - 1]);
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    prefix();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}