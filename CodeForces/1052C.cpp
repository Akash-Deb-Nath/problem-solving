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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> p(n + 1);
    ll i = 1;
    while (i <= n)
    {
        if (s[i - 1] == '1')
        {
            p[i] = i;
            i++;
        }
        else
        {
            ll zero = i;
            while (i <= n && s[i - 1] == '0')
            {
                i++;
            }
            ll len = i - zero;
            if (len == 1)
            {
                no;
                return;
            }
            loop(j, zero, i)
            {
                if (j == zero)
                {
                    p[j] = i - 1;
                }
                else
                {
                    p[j] = j - 1;
                }
            }
        }
    }
    yes;
    loop(i, 1, n + 1)
    {
        cout << p[i] << " ";
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
