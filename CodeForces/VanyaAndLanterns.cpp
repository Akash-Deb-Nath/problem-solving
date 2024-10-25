#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());
    double result = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > result)
        {
            result = a[i] - a[i - 1];
        }
    }
    double ans = result / 2.0;
    if (l - a[n - 1] > ans && l - a[n - 1] > a[0])
    {
        ans = l - a[n - 1];
    }
    else if (a[0] > ans)
    {
        ans = a[0];
    }
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}