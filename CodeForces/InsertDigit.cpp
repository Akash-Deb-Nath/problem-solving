#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] - '0' <= d)
            {
                str.insert(i, to_string(d));
                break;
            }
            cout << str << endl;
        }

        return 0;
    }
}