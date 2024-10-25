#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int temp = (k - 1) / (n - 1);
        int ans = k + temp;
        cout << ans << endl;
    }

    return 0;
}