#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, count = 0;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count = count + a[i];
    }
    cin >> m;
    long long int q[m];
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        cout << count - a[n - q[i]] << endl;
    }

    return 0;
}