#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b, x, r;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        cout << n << endl;
    }
    else
    {
        x = n / m;
        r = m * x;
        cout << x << " " << r << " " << r * a << endl;
    }

    return 0;
}