#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q;
    cin >> n >> q;
    vector<ll> x(n);
    for (auto &i : x)
    {
        cin >> i;
    }
    vector<ll> pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + x[i - 1];
    }
    cout << "Prefix Sum" << endl;
    for (auto &i : pre)
    {
        cout << i << " ";
    }
    cout << endl;
    while (q--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = 0;
        if (a == 1)
        {
            pre[b] = pre[b] - x[b - 1] + c;
            cout << "Prefix Sum inside while" << endl;
            for (auto &i : pre)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            ans = pre[c] - pre[b - 1];
        }
        cout << ans << "\n";
    }

    return 0;
}