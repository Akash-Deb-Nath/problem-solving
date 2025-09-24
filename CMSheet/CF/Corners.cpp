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
    vector<string> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (n == 1)
    {
        cout << count(a[0].begin(), a[0].end(), '1') << "\n";
        return;
    }
    ll minimumOverlap = LONG_LONG_MAX;
    ll row1 = -1, row2 = -1;
    ll ans = 0;
    for (ll i = 0; i + 1 < n; i++)
    {
        ll count = 0;
        bool flag = 1;
        for (ll j = 0; j + 1 < m; j++)
        {
            if (a[i][j] == '1' && a[i + 1][j] == '1')
            {
                count++;
            }
            if (a[i + 1][j] == '0' && a[i + 1][j + 1] == '0')
            {
                flag = 0;
                break;
            }
            if (a[i][j] == '0' && a[i][j + 1] == '0')
            {
                flag = 0;
                break;
            }
            if (a[i][j] == '0' && a[i][j + 1] == '1' && a[i + 1][j] == '1' && a[i + 1][j + 1] == '0')
            {
                flag = 0;
                break;
            }
            if (a[i][j] == '1' && a[i][j + 1] == '0' && a[i + 1][j] == '0' && a[i + 1][j + 1] == '1')
            {
                flag = 0;
                break;
            }
            if (a[i][j + 1] == '0' && a[i + 1][j + 1] == '0')
            {
                flag = 0;
                break;
            }
            if (a[i][j] == '0' && a[i + 1][j] == '0')
            {
                flag = 0;
                break;
            }
        }
        if (a[i][m - 1] == '1' && a[i + 1][m - 1] == '1')
        {
            count++;
        }
        if (flag == 0)
        {
            minimumOverlap = 0;
            row1 = -1;
            row2 = -1;
            break;
        }
        if (count < minimumOverlap)
        {
            minimumOverlap = count;
            row1 = i;
            row2 = i + 1;
        }
    }
    for (ll j = 0; j < m; j++)
    {
        if (row1 != -1 && row2 != -1)
        {
            if (a[row1][j] == '1')
            {
                ans++;
            }
            if (a[row2][j] == '1')
            {
                ans++;
            }
        }
    }
    if (ans > 1)
    {
        if (minimumOverlap == m)
        {
            ans -= 2;
        }
        else
        {
            ans--;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (row1 != -1 && row2 != -1)
            {
                if (i != row1 && i != row2)
                {
                    if (a[i][j] == '1')
                    {
                        ans++;
                    }
                }
            }
            else
            {
                if (a[i][j] == '1')
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
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