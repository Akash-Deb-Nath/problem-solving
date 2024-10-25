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
        long long int a[n], r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            r = r + a[i];
        }
        cout << abs(r) << endl;
    }

    return 0;
}