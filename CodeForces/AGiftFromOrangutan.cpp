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
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        sort(a.begin(), a.end());
        int ans;
        ans = a[n - 1] * (n - 1) - a[0] * (n - 1);
        cout << ans << endl;
    }

    return 0;
}