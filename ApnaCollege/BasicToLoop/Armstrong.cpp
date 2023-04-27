// Armstrong number is a number,which is the sum of it's qube of eah digits.
// For example 153 = 1^3+5^3+3^3.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originalN = n;
    float power;
    while (n > 0)
    {
        int lastDigit = n % 10;
        power = pow(lastDigit, 3);
        sum += power;
        n = n / 10;
    }
    if (sum == originalN)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }

    return 0;
}