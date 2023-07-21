#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, result;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int minPuzzle = INT_MAX;
    if (m - n > 0)
    {
        for (int i = 0; i < m - n; i++)
        {
            result = min(minPuzzle, a[i + n - 1] - a[i]);
            cout << result << endl;
        }
        cout << result << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}