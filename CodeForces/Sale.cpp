#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            sum += a[i];
        }
    }
    cout << -sum << endl;

    return 0;
}