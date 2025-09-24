#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll k;
    cin >> k;
    vector<ll> ans;
    while (k > 0)
    {
        ll digit = k % 9;
        if (digit >= 4)
        {
            digit++;
        }
        ans.emplace_back(digit);
        k /= 9;
    }
    reverse(ans.begin(), ans.end());
    for (auto &i : ans)
    {
        cout << i;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}