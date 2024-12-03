#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = count(s.begin(), s.end(), '.');
        int k = 0, mx = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                k++;
            }
            if (s[i] == '#' || i == n - 1)
            {
                mx = max(mx, k);
                k = 0;
            }
        }
        if (mx < 3)
        {
            cout << x << endl;
        }
        else
        {
            cout << min(x, 2) << endl;
        }
    }
    return 0;
}