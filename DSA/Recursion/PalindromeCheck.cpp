#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool checkPalindrome(string s, ll i, ll j)
{
    if (i > j)
    {
        return 1;
    }
    if (s[i] != s[j])
    {
        return 0;
    }
    return checkPalindrome(s, i + 1, j - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name = "ababa";
    ll i = 0, j = name.size() - 1;
    bool isPalindrome = checkPalindrome(name, i, j);
    if (isPalindrome)
    {
        cout << "It's a palindrome" << "\n";
    }
    else
    {
        cout << "It's not a palindrome" << "\n";
    }

    return 0;
}