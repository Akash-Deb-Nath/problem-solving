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
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "=" << "\n";
    }
    else if (a.back() == 'S' && b.back() == 'S')
    {
        ll cntA = count(all(a), 'X');
        ll cntB = count(all(b), 'X');
        if (cntA == cntB)
        {
            cout << "=" << "\n";
        }
        else if (cntA < cntB)
        {
            cout << ">" << "\n";
        }
        else
        {
            cout << "<" << "\n";
        }
    }
    else if (a.back() == 'L' && b.back() == 'L')
    {
        ll cntA = count(all(a), 'X');
        ll cntB = count(all(b), 'X');
        if (cntA == cntB)
        {
            cout << "=" << "\n";
        }
        else if (cntA < cntB)
        {
            cout << "<" << "\n";
        }
        else
        {
            cout << ">" << "\n";
        }
    }
    else if (a.back() == 'M')
    {
        if (b.back() == 'L')
        {
            cout << "<" << "\n";
        }
        else
        {
            cout << ">" << "\n";
        }
    }
    else if (a.back() == 'L')
    {
        cout << ">" << "\n";
    }
    else if (a.back() == 'S')
    {
        cout << "<" << "\n";
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