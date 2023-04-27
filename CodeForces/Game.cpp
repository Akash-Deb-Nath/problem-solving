#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int x[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    if (n % 2 == 0)
    {
        cout << min(x[(n / 2) - 1], x[n / 2]);
    }
    else
    {
        cout << x[n / 2] << endl;
    }
}