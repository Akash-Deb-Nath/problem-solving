#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((b - a == c) || ((((b - a >= 0 && c > 0) || (b - a < 0 && c < 0)) && (b - a) % c == 0)))
    {
        cout << "YES" << endl;
    }
    else if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}