#include <bits/stdc++.h>

using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1;
    int next;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}