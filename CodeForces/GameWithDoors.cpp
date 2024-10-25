#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        int ans = min(r, R) - max(l, L);
        if (ans + 1 <= 0)
        {
            ans = 1;
        }
        else
        {
            ans += (l != L);
            ans += (r != R);
        }
        cout << ans << endl;
    }
    return 0;
}