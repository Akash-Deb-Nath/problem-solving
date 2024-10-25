#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, p;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u') && (s[i] != 'y'))
        {
            p = p + '.';
            p = p + s[i];
            if (i == s.size() - 1)
            {
                break;
            }
        }
    }
    cout << p << endl;

    return 0;
}