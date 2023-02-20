#include <iostream>

using namespace std;

int decimalToOctal(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        ans = ans * 10 + lastDigit;
        x /= 8;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToOctal(n) << endl;
    return 0;
}