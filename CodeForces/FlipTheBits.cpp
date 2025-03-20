#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    string a, b;
    cin >> n >> a >> b;
    a.push_back('0');
    b.push_back('0');
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt += (a[i] == '1') - (a[i] == '0');
        if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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