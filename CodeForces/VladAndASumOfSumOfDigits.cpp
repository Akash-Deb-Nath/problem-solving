#include <bits/stdc++.h>

using namespace std;

vector<long long int> v(200005);

long long int sumOfDigits(int x)
{
    long long int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    v[0] = 0;
    for (int i = 0; i < 200005; i++)
    {
        v[i + 1] = v[i] + sumOfDigits(i);
    }
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << v[n + 1] << endl;
    }

    return 0;
}