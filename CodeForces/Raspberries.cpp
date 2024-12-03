#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = INT_MAX, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                cnt++;
            if (a % k == 0)
                ans = 0;
            ans = min(ans, k - (a % k));
        }
        if (k == 4)
        {
            if (cnt >= 2)
                cout << 0 << endl;
            else if (cnt == 1)
                cout << (min(ans, 1)) << endl;
            else
                cout << (min(ans, 2)) << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}