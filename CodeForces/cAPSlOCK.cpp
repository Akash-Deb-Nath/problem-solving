#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    string s, c, p, x, r;
    cin >> s;
    l = s.length();
    for (int i = 1; i < l; i++)
    {

        if ((s[0] >= 'A' && s[i] <= 'z') || (s[0] <= 'z' && s[i] >= 'A'))
        {
            c = toupper(s[0]);
            x = tolower(s[i]);
            p = p + x;
            r = c + p;
        }
    }
    cout << r << endl;

    return 0;
}