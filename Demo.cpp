#include <bits/stdc++.h>

using namespace std;

int getSum(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        cout << "carry = " << carry << endl;
        a = a ^ b;
        cout << "a = " << a << endl;
        b = carry << 1;
        cout << "b = " << b << endl;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << getSum(a, b) << endl;
    return 0;
}