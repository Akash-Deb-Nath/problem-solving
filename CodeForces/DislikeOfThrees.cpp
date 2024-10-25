#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 1; v.size() <= 1000; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        v.push_back(i);
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << endl;
    }

    return 0;
}