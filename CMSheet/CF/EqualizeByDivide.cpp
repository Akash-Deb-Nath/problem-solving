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
    multiset<pair<ll, ll>> s;
    vector<ll> a(n);
    loop(i, 0, n)
    {
        cin >> a[i];
        s.insert({a[i], i + 1});
    }
    vector<pair<ll, ll>> ans;
    while (1)
    {
        auto it1 = s.begin();
        auto it2 = s.end();
        it2--;
        ll mn = it1->F;
        ll mnIndex = it1->S;
        ll mx = it2->F;
        ll mxIndex = it2->S;
        ll d = (mx + mn - 1) / mn;
        if (mn == mx)
        {
            break;
        }
        if (mn == 1)
        {
            cout << -1 << "\n";
            return;
        }
        ans.pb({mxIndex, mnIndex});
        s.erase(it2);
        s.insert({d, mxIndex});
    }
    cout << ans.size() << "\n";
    for (auto i : ans)
    {
        cout << i.F << " " << i.S << "\n";
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