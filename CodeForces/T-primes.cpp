#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if ((sqrt(p) * sqrt(p)) == p && p > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}