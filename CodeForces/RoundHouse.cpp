#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int temp = (a - 1 + b) % n;
    int result = (temp + n) % n + 1;
    cout << result << endl;
    return 0;
}