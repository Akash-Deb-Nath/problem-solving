#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, r;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        r = a ^ b;
        cout << r << endl;
    }

    return 0;
}