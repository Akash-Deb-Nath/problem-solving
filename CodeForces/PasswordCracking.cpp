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

bool ask(string t)
{
    cout << "? " << t << "\n";
    cout.flush();
    ll response;
    cin >> response;
    return response;
}

void solve()
{
    ll n;
    cin >> n;
    string t;
    while (t.size() < n)
    {
        if (ask(t + '0'))
        {
            t = t + '0';
        }
        else if (ask(t + '1'))
        {
            t = t + '1';
        }
        else
        {
            break;
        }
    }

    while (t.size() < n)
    {
        if (ask('0' + t))
        {
            t = '0' + t;
        }
        else
        {
            t = '1' + t;
        }
    }
    cout << "! " << t << "\n";
    cout.flush();
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