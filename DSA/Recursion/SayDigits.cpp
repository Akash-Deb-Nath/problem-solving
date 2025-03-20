#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void Digit(ll n, vector<string> s)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    // Processing
    ll digit = n % 10;
    n /= 10;
    // Recursive call
    Digit(n, s);
    cout << s[digit] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<string> s = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    Digit(n, s);

    return 0;
}