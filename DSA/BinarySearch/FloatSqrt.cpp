#include <bits/stdc++.h>

using namespace std;

int IntSqrt(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    long long int ans = -1;
    long long int s = 1;
    long long int e = n;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempAnswer)
{
    double factor = 1;
    double ans = tempAnswer;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    int tempAnswer = IntSqrt(n);
    cout << "The answer is = " << morePrecision(n, 3, tempAnswer) << endl;
    return 0;
}