#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll zero = count(s.begin(), s.end(), '0');
    if (zero == 1 || zero % 2 == 0)
    {
        cout << "BOB\n";
        return;
    }
    cout << "ALICE\n";
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