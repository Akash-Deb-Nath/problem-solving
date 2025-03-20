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
    ll A, B, K;
    cin >> A >> B >> K;
    ll gcd = __gcd(A, B);
    vector<ll> a;
    for (ll i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            a.pb(i);
            if (i != (gcd / i))
            {
                a.pb(gcd / i);
            }
        }
    }
    dsort(a);
    cout << a[K - 1] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}