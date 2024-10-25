#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n = 0;
    string s, c, p, x, r;
    cin >> s;
    l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            n = n + 1;
        }
    }

    if (s.length() > 1)
    {
        for (int i = 1; i < l; i++)
        {
            if ((s[0] >= 'a' && s[0] <= 'z') && (s[i] >= 'A' && s[i] <= 'Z') && n < 2)
            {
                c = toupper(s[0]);
                x = tolower(s[i]);
                p = p + x;
                r = c + p;
            }
            else if (((s[0] >= 'a' && s[0] <= 'z') && n >= 2) || (s[0] >= 'A' && s[0] <= 'Z') && n >= 1)
            {
                r = s;
            }
            else if (n == 0)
            {
                c = tolower(s[0]);
                x = tolower(s[i]);
                p = p + x;
                r = c + p;
            }
            else if (n == 1)
            {
                c = toupper(s[0]);
                x = toupper(s[i]);
                p = p + x;
                r = c + p;
            }
        }
    }
    else
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            r = toupper(s[0]);
        }
        else
        {
            r = tolower(s[0]);
        }
    }

    cout << r << endl;

    return 0;
}