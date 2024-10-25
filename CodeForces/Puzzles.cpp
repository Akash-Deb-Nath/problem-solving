#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int result = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        result = min(result, a[i + n - 1] - a[i]);
    }
    cout << result << endl;

    return 0;
}