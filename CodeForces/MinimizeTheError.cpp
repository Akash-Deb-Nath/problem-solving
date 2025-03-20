#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> b(n);
    for (auto &i : b)
    {
        cin >> i;
    }
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(abs(a[i] - b[i]));
    }
    ll k = k1 + k2;
    while (k > 0)
    {
        ll pp = pq.top();
        pq.pop();

        pq.push(abs(pp - 1));
        k--;
    }
    ll ans = 0;
    while (!pq.empty())
    {
        ans += pq.top() * pq.top();
        pq.pop();
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}