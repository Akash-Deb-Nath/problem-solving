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
    for (auto &i : a)
    {
        cin >> i;
    }
    ll zero = count(a.begin(), a.end(), 0);
    ll one = n - zero;
    if (zero >= n / 2)
    {
        cout << zero << "\n";
        for (ll i = 0; i < zero; i++)
        {
            cout << 0 << " ";
        }
        cout << "\n";
    }
    else
    {
        ll temp = one - one % 2;
        cout << temp << "\n";
        for (ll i = 0; i < temp; i++)
        {
            cout << 1 << " ";
        }
        cout << "\n";
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