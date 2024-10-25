#include <bits/stdc++.h>

using namespace std;

void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is Odd" << endl;
    }
}

int main()
{
    int num;
    cin >> num;
    evenOdd(num);
    return 0;
}