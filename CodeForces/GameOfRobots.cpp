#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (k - i > 0)
        {
            k = k - i;
        }
    }
    cout << a[k - 1] << endl;

    return 0;
}