#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, min = 0, max = 0;
    cin >> n;
    if (n % 7 < 6)
    {
        min = (n / 7) * 2;
    }
    else
    {
        min = (n / 7) * 2 + (7 - (n % 7));
    }
    if (n % 7 >= 2)
    {
        max = (n / 7) * 2 + 2;
    }
    else
    {
        max = (n / 7) * 2 + (n % 7);
    }
    cout << min << " " << max << endl;
    return 0;
}