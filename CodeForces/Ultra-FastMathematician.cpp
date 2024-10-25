#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int r[a.size()];
    for (int i = 0; i < a.size(); i++)
    {
        r[i] = a[i] ^ b[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << r[i];
    }

    return 0;
}