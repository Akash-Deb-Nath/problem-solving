#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int k;
        cin >> k;
        cout << k + int(sqrtl(k) + 0.5) << endl;
    }

    return 0;
}