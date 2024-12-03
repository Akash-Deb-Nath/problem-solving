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
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a.rbegin(), a.rend());
        int size = 0, teams = 0;
        for (auto &i : a)
        {
            size++;
            if (i * size >= x)
            {
                teams++;
                size = 0;
            }
        }
        cout << teams << endl;
    }

    return 0;
}