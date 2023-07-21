#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n, count = 0, r = 0, x = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'x')
        {
            count = count + x;
            r = 0;
            x = 0;
        }
        if (s[i] == 'x')
        {
            r = r + 1;
        }
        if (r > 2)
        {
            x = x + 1;
        }
    }
    cout << count << endl;

    return 0;
}
