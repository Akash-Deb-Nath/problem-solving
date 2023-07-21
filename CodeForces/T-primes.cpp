#include <bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long int n, p;
    cin >> n;
    long long int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        p = sqrt(x[i]);
        if ((p * p) == x[i] && x[i] > 1 && isPrime(p))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}