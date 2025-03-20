#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (abs(b - a) & 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}