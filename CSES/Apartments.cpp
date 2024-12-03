#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (b[j] >= a[i] - k && b[j] <= a[i] + k)
        {
            ans++;
            i++;
            j++;
        }
        else if (b[j] - k < a[i])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}