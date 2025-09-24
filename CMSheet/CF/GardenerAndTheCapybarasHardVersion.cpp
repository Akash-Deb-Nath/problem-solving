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
    string s;
    cin >> s;
    ll n = s.size();
    bool flag = 0;
    ll index = 0;
    loop(i, 1, n - 1)
    {
        if (s[i] == 'a')
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if (flag)
    {
        cout << s.substr(0, index) << " " << s[index] << " " << s.substr(index + 1, n - index) << "\n";
    }
    else
    {
        cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1] << "\n";
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