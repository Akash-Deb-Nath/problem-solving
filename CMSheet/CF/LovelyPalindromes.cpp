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
    string s;
    cin >> s;
    string ans;
    ans += s;
    reverse(s.begin(), s.end());
    ans += s;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}