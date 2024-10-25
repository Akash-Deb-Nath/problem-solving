#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<int> b(n);
    int mn = INT_MAX, mx = 0;
    for (auto &it : b)
    {
        cin >> it;
        mn = min(mn, it);
        mx = max(mx, it);
    }
    long long int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == mn)
        {
            count1++;
        }
        if (b[i] == mx)
        {
            count2++;
        }
    }
    cout << mx - mn << " ";
    if (mx == mn)
        cout << n * (n - 1) / 2;
    else
        cout << count1 * count2;

    return 0;
}