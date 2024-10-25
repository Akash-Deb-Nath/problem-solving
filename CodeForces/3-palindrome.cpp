#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "b";
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (i % 2 == 0)
        {
            cout << "aa";
        }
        else
        {
            cout << "bb";
        }
    }

    return 0;
}