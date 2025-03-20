#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    ll count = 0;
    vector<ll> ans(n + 2, 1);
    vector<bool> isPrime(n + 2, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= n + 1; i++)
    {
        if (isPrime[i] && (i * i <= n + 1))
        {
            count++;
            for (ll j = i * i; j <= n + 1; j += i)
            {
                isPrime[j] = false;
                ans[j] = 2;
            }
        }
    }
    ll mx = *max_element(ans.begin() + 2, ans.end());
    cout << mx << "\n";
    for (ll i = 2; i <= n + 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}