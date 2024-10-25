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
        vector<long long int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        long long int ans = 0;
        long long int sum = 0;
        long long int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum = sum + a[i];
            if (sum - mx == mx)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}