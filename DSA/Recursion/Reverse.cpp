#include <bits/stdc++.h>

using namespace std;

#define ll long long int

// void reverse(string s)
// {
//     // Base case
//     if (s.size() == 0)
//     {
//         return;
//     }
//     // Recursive case
//     reverse(s.substr(1));
//     cout << s[0];
// }

void reverse(string &s, ll i, ll j)
{
    cout << "Call recieve " << s << "\n";
    // Base case
    if (i > j)
    {
        return;
    }
    // Processing
    swap(s[i], s[j]);
    i++;
    j--;
    // Recursive case
    reverse(s, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name;
    cin >> name;
    reverse(name, 0, name.size() - 1);
    cout << name << "\n";

    return 0;
}