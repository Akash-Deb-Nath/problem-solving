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
        int ans = a[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & a[i];
        }
        cout << ans << endl;
    }

    return 0;
}