#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, l, s, r = 0;
    string w;
    cin >> s;
    w = to_string(s);
    l = w.size();
    cout << l << endl;
    for (i = 0; i < l; i++)
    {
        if (w[i] == '4' || w[i] == '7')
        {
            r = r + 1;
            cout << "For " << i << " = " << w[i] << " r= " << r << endl;
        }
    }
    if (r == 4 || r == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}