#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

vector<string> grayCode(ll n)
{
    if (n == 1)
    {
        return {"0", "1"};
    }
    vector<string> ans;
    vector<string> temp = grayCode(n - 1);
    for (ll i = 0; i < temp.size(); i++)
    {
        ans.pb("0" + temp[i]);
    }
    for (ll i = temp.size() - 1; i >= 0; i--)
    {
        ans.pb("1" + temp[i]);
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<string> ans = grayCode(n);
    for (auto &i : ans)
    {
        cout << i << " ";
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