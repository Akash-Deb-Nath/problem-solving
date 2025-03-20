#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;

    map<ll, ll> prefixSumFreq;
    prefixSumFreq[0] = 1;
    ll ans = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        ll power = 1;
        while (abs(power) <= 1e15)
        {
            if (prefixSumFreq.count(sum - power))
            {
                ans += prefixSumFreq[sum - power];
            }
            if (k == 1)
            {
                break;
            }
            if (k == -1 && power == -1)
            {
                break;
            }
            power *= k;
        }
        prefixSumFreq[sum]++;
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