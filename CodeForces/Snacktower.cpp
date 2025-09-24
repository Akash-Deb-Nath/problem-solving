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
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    priority_queue<ll> pq;
    ll curr = n;
    for (auto i : a)
    {
        if (i == curr)
        {
            if (pq.size() == 0)
            {
                cout << i << "\n";
                curr--;
            }
            else
            {
                cout << i << " ";
                curr--;
                while (pq.size() > 0)
                {
                    if (pq.top() == curr)
                    {
                        cout << pq.top() << " ";
                        pq.pop();
                        curr--;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            pq.push(i);
            cout << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}