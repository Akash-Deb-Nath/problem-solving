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
        vector<int> x(n), y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        int Xs, Ys, Xt, Yt;
        cin >> Xs >> Ys >> Xt >> Yt;
        long long distance = 1LL * (Xs - Xt) * (Xs - Xt) + 1LL * (Ys - Yt) * (Ys - Yt);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            long long result = 1LL * (x[i] - Xt) * (x[i] - Xt) + 1LL * (y[i] - Yt) * (y[i] - Yt);
            if (result <= distance)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}