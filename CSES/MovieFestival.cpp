#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        pq.push({b, a});
    }
    auto x = pq.top();
    pq.pop();
    ll prevEnd = x.first;
    ll ans = 1;
    while (!pq.empty())
    {
        auto temp = pq.top();
        pq.pop();
        ll nextStart = temp.second;
        if (prevEnd <= nextStart)
        {
            ans++;
            prevEnd = temp.first;
        }
    }
    cout << ans << endl;

    return 0;
}