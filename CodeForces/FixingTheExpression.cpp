#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll x = s[0] - '0';
        ll y = s[2] - '0';
        if (x > y)
        {
            cout << x << ">" << y << endl;
        }
        else if (y > x)
        {
            cout << x << "<" << y << endl;
        }
        else
        {
            cout << x << "=" << y << endl;
        }
    }
}