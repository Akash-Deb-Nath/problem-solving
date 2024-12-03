#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n, m;
    cin >> n >> m;
    if (m > 1)
    {
        cout << n * (m - 1) << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }

    return 0;
}