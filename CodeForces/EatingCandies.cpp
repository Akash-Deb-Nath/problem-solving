#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> w(n);
        for (auto &i : w)
        {
            cin >> i;
        }
        vector<ll> prefixSum(n);
        prefixSum[0] = w[0];
        for (ll i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + w[i];
        }
        ll i = 0, j = n - 1;
        ll ans = 0;
        while (i < j)
        {
            if (prefixSum[i] == (prefixSum[n - 1] - prefixSum[j - 1]))
            {
                ans = i + 1 + (n - j);
                i++;
                j--;
            }
            else if (prefixSum[i] > (prefixSum[n - 1] - prefixSum[j - 1]))
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
