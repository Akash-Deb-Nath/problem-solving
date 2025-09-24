#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(name, r, c, val) vector<vll> name(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll>
#define msll multiset<ll>
#define maxPqll priority_queue<ll>
#define minPqll priority_queue<ll, vll, greater<ll>>
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
#define dekhao(x) cout << x << "\n"
#define debug(x) cout << #x << " = " << x << "\n"
#define nl cout << "\n"

void solve()
{
    ll m, s;
    cin >> m >> s;
    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    if (s == 0 || (s > 9 * m))
    {
        cout << -1 << " " << -1 << "\n";
        return;
    }
    string ans;
    rloop(i, 9, 1)
    {
        while (s >= i && m > 0)
        {
            ans += '0' + i;
            s -= i;
            m--;
        }
    }
    if (m)
    {
        string temp(m, '0');
        ans += temp;
    }
    string ans2 = ans;
    reverse(all(ans2));
    ll i = 0;
    if (ans2[0] == '0')
    {
        while (1)
        {
            if (ans2[i] != '0')
            {
                ans2[0] = ans2[i];
                ans2[i] = '0';
                break;
            }
            i++;
        }
    }
    cout << ans2 << " " << ans << "\n";
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