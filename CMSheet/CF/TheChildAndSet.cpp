#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll lowbit(ll x)
{
    return x & (-x);
}

void solve()
{
    ll sum, limit;
    cin >> sum >> limit;
    vector<ll> ans;
    for (ll i = limit; i >= 1; i--)
    {
        ll temp = lowbit(i);
        if (temp <= sum)
        {
            ans.pb(i);
            sum -= temp;
            if (sum == 0)
            {
                break;
            }
        }
    }
    if (sum > 0)
    {
        cout << "-1" << "\n";
    }
    else
    {
        cout << ans.size() << "\n";
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}