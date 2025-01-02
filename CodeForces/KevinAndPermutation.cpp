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
        ll n, k;
        cin >> n >> k;
        ll count = 1;
        vector<ll> ans(n, -1);
        for (ll i = k - 1; i < n; i += k)
        {
            ans[i] = count;
            count++;
        }
        for (ll i = 0; i < n; i++)
        {
            if (ans[i] == -1)
            {
                ans[i] = count;
                count++;
            }
        }
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}