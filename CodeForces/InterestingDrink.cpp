#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, a, r = 0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        int upper1 = upper_bound(x, x + n, a) - x;
        cout << upper1 << endl;
    }

    return 0;
}