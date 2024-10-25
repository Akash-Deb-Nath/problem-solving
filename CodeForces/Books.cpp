#include <iostream>

using namespace std;

int main()
{
    int n, t, r = 0, p = 0, ans = 0;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        while (r < n && p + a[r] <= t)
        {
            p = p + a[r];
            r++;
        }
        ans = max(ans, r - i);
        p = p - a[i];
    }
    cout << ans << endl;

    return 0;
}