#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int max = INT_MIN;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if (a[i] <= 10)
            {
                if (b[i] > max)
                {
                    max = b[i];
                    x = i + 1;
                }
            }
        }
        cout << x << endl;
    }

    return 0;
}