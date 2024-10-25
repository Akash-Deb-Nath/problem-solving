#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s;
    int a = 0, d = 0, l, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == 'A')
        {
            a += 1;
        }
        else
        {
            d += 1;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (a < d)
    {
        cout << "Danik";
    }
    else if (a == d)
    {
        cout << "Friendship";
    }

    return 0;
}