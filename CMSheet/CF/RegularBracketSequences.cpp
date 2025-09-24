#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n;
    cin >> n;
    vector<string> ans;
    string s;
    for (ll i = 0; i < n; i++)
    {
        s += "()";
    }
    ans.pb(s);
    for (ll i = 1; i < n; i++)
    {
        deque<char> q;
        string temp;
        for (ll j = 1; j <= i; j++)
        {
            q.push_back('(');
            q.push_back(')');
        }
        for (ll j = 1; j <= n - i; j++)
        {
            q.push_front('(');
            q.push_back(')');
        }
        while (!q.empty())
        {
            temp.pb(q.front());
            q.pop_front();
        }
        ans.pb(temp);
    }
    for (auto &i : ans)
    {
        cout << i << "\n";
    }
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