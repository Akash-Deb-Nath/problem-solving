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
    ll n;
    cin >> n;
    vector<ll> a(n);
    set<ll> s;
    for (auto &i : a)
    {
        cin >> i;
        s.insert(i);
    }
    if (s.size() == 1)
    {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
    ll mx = *max_element(a.begin(), a.end());
    for (auto i : a)
    {
        if (i == mx)
        {
            cout << "1 ";
        }
        else
        {
            cout << "2 ";
        }
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