#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll a, m;
    cin >> a >> m;
    ll n = 50;
    while (n--)
    {
        if (a % m == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
        a += a % m;
    }
    cout << "No" << endl;

    return 0;
}