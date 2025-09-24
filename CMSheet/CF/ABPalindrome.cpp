#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(name, r, c, val) vector<vll> name(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll>
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
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll n = s.size();
    ll one = count(all(s), '1');
    ll zero = count(all(s), '0');
    a -= zero;
    b -= one;
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            if (s[i] == '?')
            {
                if (s[j] == '1')
                {
                    b--;
                    s[i] = '1';
                }
                else
                {
                    a--;
                    s[i] = '0';
                }
            }
            else if (s[j] == '?')
            {
                if (s[i] == '1')
                {
                    b--;
                    s[j] = '1';
                }
                else
                {
                    a--;
                    s[j] = '0';
                }
            }
            else
            {
                dekhao(-1);
                return;
            }
        }
        i++;
        j--;
    }
    i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] == '?' && s[j] == '?')
        {
            if (a > 1)
            {
                a -= 2;
                s[i] = '0';
                s[j] = '0';
            }
            else if (b > 1)
            {
                b -= 2;
                s[i] = '1';
                s[j] = '1';
            }
            else if (i == j && a > 0)
            {
                a--;
                s[i] = '0';
            }
            else if (i == j && b > 0)
            {
                b--;
                s[i] = '1';
            }
            else
            {
                dekhao(-1);
                return;
            }
        }
        i++;
        j--;
    }
    if (a || b)
    {
        dekhao(-1);
        return;
    }
    dekhao(s);
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