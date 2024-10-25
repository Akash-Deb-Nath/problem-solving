#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int zero = 0, one = 0, r;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if (zero != one)
        {
            r = s.size() - max(zero, one);
        }
        else
        {
            r = zero - 1;
        }

        cout << r << endl;
    }

    return 0;
}