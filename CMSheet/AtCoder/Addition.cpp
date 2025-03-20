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
    ll odd = 0;
    for (auto &i : a)
    {
        cin >> i;
        if (i & 1)
        {
            odd++;
        }
    }
    if (odd & 1)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}