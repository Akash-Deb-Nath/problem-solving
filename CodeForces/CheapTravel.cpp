#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b, x, r;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        x = n / m;
        r = x * b;
        cout << r + min((n % m) * a, b) << endl;
    }

    return 0;
}