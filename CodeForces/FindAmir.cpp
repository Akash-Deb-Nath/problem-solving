#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    for (int i = n / 2 + 1; i < n; i++)
    {
        int r = 2 * i + 1;
        result = result + (r / n);
    }
    cout << result << endl;

    return 0;
}