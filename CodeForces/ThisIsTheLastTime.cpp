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
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(3));
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    sort(all(a), [](const vector<ll> &x, const vector<ll> &y)
         { return x[2] < y[2]; });
    for (auto &i : a)
    {
        if (i[0] <= k && k <= i[2])
        {
            k = max(k, i[2]);
        }
    }
    dekhao(k);
}
/*
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<tuple<ll, ll, ll>> a;
    for (ll i = 0; i < n; ++i)
    {
        ll l, r, Real;
        cin >> l >> r >> Real;
        a.push_back(make_tuple(l, r, Real));
    }
    sort(all(a), [](const tuple<ll, ll, ll> &x, const tuple<ll, ll, ll> &y)
         { return get<2>(x) < get<2>(y); });
    for (auto &[l, r, Real] : a)
    {
        if (l <= k && r >= k)
        {
            k = max(k, Real);
        }
    }
    dekhao(k);
}
*/
/*
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
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, k;
    cin >> n >> k;
    struct casino
    {
        ll l, Real, r;
    };
    vector<casino> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].l >> a[i].Real >> a[i].r;
    }
    sort(all(a), [](casino &x, casino &y)
         { return x.l < y.l; });
    ll cur = k;
    ll index = 0;
    priority_queue<ll> pq;
    while (1)
    {
        while (index < n && a[index].l <= cur)
        {
            pq.push(a[index].r);
            index++;
        }
        while (!pq.empty() && pq.top() <= cur)
        {
            pq.pop();
        }
        if (pq.empty())
        {
            break;
        }
        cur = pq.top();
        pq.pop();
    }
    dekhao(cur);
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
*/

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