#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int result;
    result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}