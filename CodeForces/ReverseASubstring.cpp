#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (is_sorted(s.begin(), s.end()))
    {
        cout << "NO" << "\n";
        return 0;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i - 1] > s[i])
        {
            cout << "YES" << "\n";
            cout << i << " " << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}