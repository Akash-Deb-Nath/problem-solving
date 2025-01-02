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
        if (n < 5)
        {
            cout << -1 << endl;
            continue;
        }
        vector<ll> ans;
        for (ll i = 1; i <= n; i += 2)
        {
            if (i != 5)
            {
                ans.push_back(i);
            }
        }
        ans.push_back(5);
        ans.push_back(4);
        for (ll i = 2; i <= n; i += 2)
        {
            if (i != 4)
            {
                ans.push_back(i);
            }
        }
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}