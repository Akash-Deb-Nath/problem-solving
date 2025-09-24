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
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, color1 = 0, color2 = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> ans;
    stack<char> st1, st2;
    loop(i, 0, n)
    {
        if (s[i] == '(')
        {
            if (!st2.empty() && st2.top() == ')')
            {
                st2.pop();
                ans.pb(2);
                color2++;
            }
            else
            {
                st1.push('(');
                ans.pb(1);
                color1++;
            }
        }
        else
        {
            if (!st1.empty() && st1.top() == '(')
            {
                st1.pop();
                ans.pb(1);
                color1++;
            }
            else
            {
                st2.push(')');
                ans.pb(2);
                color2++;
            }
        }
    }
    if (st1.empty() && st2.empty())
    {
        if (color1 && color2)
        {
            dekhao(2);
        }
        else
        {
            dekhao(1);
        }
        for (ll i = 0; i < n; i++)
        {
            if (color1 == 0 || color2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << ans[i] << " ";
            }
        }
        cout << "\n";
    }
    else
    {
        dekhao(-1);
    }
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