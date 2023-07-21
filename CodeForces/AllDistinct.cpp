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
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int count = 0;
        for (auto i = 0; i < s.size(); i++)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}