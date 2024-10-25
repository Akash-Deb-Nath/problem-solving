#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        int even = 0, odd = 0;
        for (auto &it : a)
        {
            if (it % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int minimum = min(odd, x);
        x = x - ((minimum % 2 == 0) ? minimum - 1 : minimum);
        if (even >= x && odd)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}