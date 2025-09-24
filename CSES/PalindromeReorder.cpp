#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto ch : s)
    {
        mp[ch]++;
    }
    ll oddCount = 0;
    char middleChar;
    for (auto i : mp)
    {
        if (i.second & 1)
        {
            oddCount++;
            middleChar = i.first;
        }
    }
    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
    string firstHalf = "";
    string secondHalf = "";
    for (auto i : mp)
    {
        ll pairs = i.second / 2;
        for (ll k = 0; k < pairs; ++k)
        {
            firstHalf += i.first;
        }
    }
    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());
    string ans = "";
    if (oddCount == 1)
    {
        ans = firstHalf + middleChar + secondHalf;
    }
    else
    {
        ans = firstHalf + secondHalf;
    }
    cout << ans << "\n";
    return 0;
}