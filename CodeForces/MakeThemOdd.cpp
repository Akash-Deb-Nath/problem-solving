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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                s.insert(a);
            }
        }
        int count = 0;
        while (1)
        {
            if (s.size() == 0)
            {
                break;
            }
            auto current = s.end();
            current--;
            int value = *current / 2;
            s.erase(current);
            if (value % 2 == 0)
            {
                s.insert(value);
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}