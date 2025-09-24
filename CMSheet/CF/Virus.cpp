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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (auto &i : a)
    {
        cin >> i;
    }
    asort(a);
    vector<ll> gaps;
    loop(i, 0, m - 1)
    {
        gaps.pb(a[i + 1] - a[i] - 1);
    }
    gaps.pb(n - a.back() - 1 + a.front());
    dsort(gaps);
    ll days = 0;
    ll safeHouse = 0;
    for (auto gap : gaps)
    {
        ll currentGap = gap;
        ll lost = 2 * days;
        currentGap -= lost;
        if (currentGap <= 0)
        {
            break;
        }
        safeHouse += (currentGap - 1);
        if (currentGap == 1)
        {
            safeHouse++;
        }
        days += 2;
    }
    ll infectedHouse = n - safeHouse;
    cout << infectedHouse << "\n";
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