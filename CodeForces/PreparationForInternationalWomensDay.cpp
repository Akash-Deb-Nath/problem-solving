#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int d[n];
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        r += d[i];
    }
    int result = ((r / n) + (n / k));
    cout << result << endl;

    return 0;
}