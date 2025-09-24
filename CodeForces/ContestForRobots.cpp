#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n;
    cin >> n;
    vector<ll> r(n);
    for (auto &i : r)
    {
        cin >> i;
    }
    vector<ll> b(n);
    for (auto &i : b)
    {
        cin >> i;
    }
    ll zeroR = count(all(r), 0);
    ll oneR = count(all(r), 1);
    ll zeroB = count(all(b), 0);
    ll oneB = count(all(b), 1);
    if (zeroR == n || (oneR == n && oneB == n))
    {
        cout << -1 << endl;
    }
    else if (zeroB == n && zeroR != n)
    {
        cout << 1 << endl;
    }
    else
    {
        loop(i, 0, n)
        {
            if (r[i] == 1 && b[i] == 1)
            {
                oneR--;
                oneB--;
            }
        }
        if (oneR == 0)
        {
            cout << -1 << endl;
            return;
        }
        ll temp = (oneB + oneR - 1) / oneR;
        if (temp * oneR > oneB)
        {
            cout << temp << endl;
        }
        else
        {
            cout << temp + 1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}