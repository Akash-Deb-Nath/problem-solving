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
        string str;
        cin >> str;
        int l = 0, r = n - 1, ans = n;
        while (str[l] != str[r] && ans > 0)
        {
            l++;
            r--;
            ans -= 2;
        }
        cout << ans << endl;
    }

    return 0;
}