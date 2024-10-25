#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        for (auto &y : b)
        {
            cin >> y;
        }
        if (a == b || a == std::vector<int>(b.rbegin(), b.rend())) // Explicit vector type
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
