#include <bits/stdc++.h>

using namespace std;

int setBit(int n)
{
    int ans = 0;
    while (n)
    {
        ans = ans + (n & 1);
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << setBit(a) + setBit(b) << endl;
    return 0;
}