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
        int zero = count(s.begin(), s.end(), '0');
        int one = s.size() - zero;
        int temp = min(zero, one);
        if (temp & 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }

    return 0;
}