#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());
    if (k == 0)
    {
        if (a[0] == 1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << a[0] - 1 << "\n";
        }
    }
    else if (a[k - 1] == a[k])
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a[k - 1] << endl;
    }

    return 0;
}