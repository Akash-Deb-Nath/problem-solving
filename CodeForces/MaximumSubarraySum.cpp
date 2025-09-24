#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())

ll kadane(vector<ll> &a)
{
    ll currentSum = 0;
    ll bestSum = LONG_LONG_MIN;
    for (auto i : a)
    {
        currentSum = max(i, currentSum + i);
        bestSum = max(bestSum, currentSum);
    }
    return bestSum;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    ll mx = LONG_LONG_MIN;
    ll mn = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            mn = pre[i + 1];
            break;
        }
        mx = max(mx, pre[i + 1]);
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            if (mx > mn)
            {
                a[i] = k - mx;
            }
            else
            {
                a[i] = k - mn;
            }
            break;
        }
    }
    vector<ll> temp(n + 1);
    ll p = LONG_LONG_MIN;
    for (ll i = 1; i <= n; i++)
    {
        temp[i] = temp[i - 1] + a[i - 1];
        p = max(p, temp[i]);
    }
    if (p != k)
    {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
    for (auto &i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
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