#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s.back() == 'B')
    {
        if (count(s.begin(), s.end(), 'B') == 1)
        {
            cout << "Alice" << "\n";
        }
        else
        {
            cout << "Bob" << "\n";
        }
        return;
    }
    if (s[0] == 'A' || s[n - 2] == 'A')
    {
        cout << "Alice" << "\n";
    }
    else
    {
        cout << "Bob" << "\n";
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