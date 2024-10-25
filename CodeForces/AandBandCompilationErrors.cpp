#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r = 0, p = 0, t = 0;
    cin >> n;
    int a[n], b[n - 1], c[n - 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        r += a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        p += b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        t += c[i];
    }
    cout << r - p << "\n";
    cout << p - t << "\n";

    return 0;
}