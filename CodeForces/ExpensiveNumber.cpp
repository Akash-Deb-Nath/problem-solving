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
    string n;
    cin >> n;
    ll ans = n.size() - 1;
    ll i = ans;
    while (n[i] == '0')
    {
        i--;
    }
    ll zero = count(n.begin(), n.begin() + i, '0');
    ans = ans - zero;
    cout << ans << "\n";
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