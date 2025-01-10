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
        if (n == 1)
        {
            cout << 1 << "\n";
            cout << 1 << "\n";
            continue;
        }
        if (k == 1 || k == n)
        {
            cout << -1 << "\n";
            continue;
        }
        ll left = k - 1;
        ll right = n - k;
        vector<ll> ans;
        if (left & 1)
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(1);
            ans.push_back(2);
        }
        ans.push_back(k);
        if (right & 1)
        {
            ans.push_back(k + 1);
        }
        else
        {
            ans.push_back(k + 1);
            ans.push_back(k + 2);
        }
        cout << ans.size() << "\n";
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}