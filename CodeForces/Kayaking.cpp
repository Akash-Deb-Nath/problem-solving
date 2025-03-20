#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    n = 2 * n;
    vector<ll> w(n);
    for (auto &i : w)
    {
        cin >> i;
    }
    sort(w.begin(), w.end());
    ll ans = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            vector<ll> remain;
            for (ll k = 0; k < n; k++)
            {
                if (k != i && k != j)
                {
                    /*
                    jdi single kayak e na hoy taile tkhn amra tandem e push kortasi
                    Prothom duita loop diya possible sob single kayak re check kortasi,
                    porer lopp e single loop er gula bad ditasi k!=i && k!=j diya
                    */
                    remain.push_back(w[k]);
                }
            }
            ll instability = 0;
            for (ll x = 1; x < remain.size(); x += 2)
            {
                instability += (remain[x] - remain[x - 1]);
            }
            ans = min(ans, instability);
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}