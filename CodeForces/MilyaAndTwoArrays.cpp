#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    set<ll> s1, s2;
    for (auto &i : a)
    {
        cin >> i;
        s1.insert(i);
    }
    for (auto &i : b)
    {
        cin >> i;
        s2.insert(i);
    }
    if ((s1.size() < 3 && s2.size() == 1) || (s1.size() == 1 && s2.size() < 3))
    {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
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