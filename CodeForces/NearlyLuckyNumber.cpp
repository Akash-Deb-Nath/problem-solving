#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, l, r = 0;
    string w;
    cin >> w;
    l = w.length();
    for (i = 0; i < l; i++)
    {
        if (w[i] == '4' || w[i] == '7')
        {
            r = r + 1;
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