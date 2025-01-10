#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, Pb, Ps;
        cin >> n >> k >> Pb >> Ps;
        Pb--;
        Ps--;

        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
            p[i]--;
        }

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto get = [&](ll x)
        {
            ll ans = 0;
            ll sum = 0;
            for (ll i = 0; i < min(n, k); i++)
            {
                ans = max(ans, 1LL * (k - i) * a[x] + sum);
                sum += a[x];
                x = p[x];
            }
            return ans;
        };

        ll ansB = get(Pb);
        ll ansS = get(Ps);
        if (ansB > ansS)
        {
            cout << "Bodya\n";
        }
        else if (ansB < ansS)
        {
            cout << "Sasha\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }

    return 0;
}