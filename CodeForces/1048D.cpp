#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Precompute whether odd/even sequences are sorted up to each index
        vector<int> odd_sorted(n), even_sorted(n);
        odd_sorted[0] = 1; // first element trivially sorted
        if (n > 1)
            even_sorted[1] = 1;

        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                odd_sorted[i] = (a[i] >= a[i - 2] ? 1 : 0);
                if (!odd_sorted[i - 2])
                    odd_sorted[i] = 0;
            }
            else
            {
                even_sorted[i] = (a[i] >= a[i - 2] ? 1 : 0);
                if (!even_sorted[i - 2])
                    even_sorted[i] = 0;
            }
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;

            bool ok = true;
            // check odd indices in subarray
            for (int i = l + 2; i <= r; i += 2)
            {
                if (a[i] < a[i - 2])
                    ok = false;
            }
            // check even indices in subarray
            for (int i = l + 1 + ((l % 2) == 0 ? 1 : 0); i + 2 <= r; i += 2)
            {
                if (a[i] < a[i - 2])
                    ok = false;
            }

            cout << (ok ? "YES" : "NO") << "\n";
        }
    }
}
