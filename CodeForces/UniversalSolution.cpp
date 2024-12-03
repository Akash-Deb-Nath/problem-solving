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
        int r = count(s.begin(), s.end(), 'R');
        int p = count(s.begin(), s.end(), 'P');
        int s2 = count(s.begin(), s.end(), 'S');
        char ans;
        if (r >= p && r >= s2)
        {
            ans = 'P';
        }
        else if (p >= r && p >= s2)
        {
            ans = 'S';
        }
        else
        {
            ans = 'R';
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << ans;
        }
        cout << endl;
    }

    return 0;
}