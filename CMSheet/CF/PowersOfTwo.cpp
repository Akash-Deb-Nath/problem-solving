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
    ll n, k;
    cin >> n >> k;
    ll temp = n;
    priority_queue<ll> pq;
    for (ll i = 30; i >= 0; i--)
    {
        while (temp >= (1 << i))
        {
            temp -= (1 << i);
            pq.push(1 << i);
        }
    }
    if (pq.size() > k || k > n || temp != 0)
    {
        cout << "NO" << "\n";
        return;
    }
    while (pq.size() < k)
    {
        ll top = pq.top();
        pq.pop();
        if (top == 1)
        {
            pq.push(top);
            break;
        }
        else
        {
            pq.push(top / 2);
            pq.push(top / 2);
        }
    }
    cout << "YES" << "\n";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}