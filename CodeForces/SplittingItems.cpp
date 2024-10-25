#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a.rbegin(), a.rend());
        int A = 0, B = 0;
        for (int i = 0; i < n; i += 2)
        {
            A += a[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            B += a[i];
        }
        B += k;
        int r = A - B;
        r = max(r, n % 2 == 0 ? 0 : a[n - 1]);
        cout << r << endl;
    }

    return 0;
}