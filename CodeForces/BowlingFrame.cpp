#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll w, b, i;
        cin >> w >> b;
        ll n = w + b;
        for (i = 1; i <= n; i++)
        {
            n = n - i;
        }
        cout << i - 1 << '\n';
    }
    return 0;
}