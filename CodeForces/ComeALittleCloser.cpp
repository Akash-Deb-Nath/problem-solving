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
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        x[i] = v[i].first;
        y[i] = v[i].second;
    }

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    vector<ll> xs = x, ys = y;
    sort(all(xs));
    sort(all(ys));

    ll xmin1 = xs[0], xmin2 = xs[1];
    ll xmax1 = xs[n - 1], xmax2 = xs[n - 2];
    ll ymin1 = ys[0], ymin2 = ys[1];
    ll ymax1 = ys[n - 1], ymax2 = ys[n - 2];

    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll xl = (v[i].first == xmin1 ? xmin2 : xmin1);
        ll xh = (v[i].first == xmax1 ? xmax2 : xmax1);
        ll yl = (v[i].second == ymin1 ? ymin2 : ymin1);
        ll yh = (v[i].second == ymax1 ? ymax2 : ymax1);

        ll w = xh - xl + 1;
        ll h = yh - yl + 1;
        ll cost = w * h;

        if (cost == n - 1)
            cost += min(w, h);
        ans = min(ans, cost);
    }

    cout << ans << '\n';
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