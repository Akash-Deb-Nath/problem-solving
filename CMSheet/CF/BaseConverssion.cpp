#include <bits/stdc++.h>

using namespace std;

#define ll long long int

string base(ll n, string s)
{
    if (n == 0)
    {
        return s;
    }
    s += to_string(n % 2);
    return base(n / 2, s);
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
        ll n;
        cin >> n;
        string s = "";
        string ans = base(n, s);
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }

    return 0;
}