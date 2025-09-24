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
    ll N;
    cin >> N;
    vector<ll> vals;
    for (ll p = 2; N > 1; p++)
    {
        if (p * p > N)
        {
            p = N;
        }
        ll e = 0;
        while (N % p == 0)
        {
            N /= p;
            if (e == vals.size())
            {
                vals.push_back(p);
            }
            else
            {
                vals[e] *= p;
            }
            e++;
        }
    }
    cout << accumulate(vals.begin(), vals.end(), 0) << '\n';
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