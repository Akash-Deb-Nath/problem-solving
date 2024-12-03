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
        int temp = 0;
        for (auto &i : a)
        {
            cin >> i;
            temp = temp ^ i;
        }
        int ans = -1;
        if (temp == 0)
        {
            ans = temp;
        }
        else
        {
            if (n & 1)
            {
                ans = temp;
            }
            else
            {
                ans = -1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}