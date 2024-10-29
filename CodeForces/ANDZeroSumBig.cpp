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
        long long int ans = 1;
        for (int i = 0; i < k; i++)
        {
            ans = (ans * n) % 1000000007;
        }
        cout << ans << "\n";
    }

    return 0;
}