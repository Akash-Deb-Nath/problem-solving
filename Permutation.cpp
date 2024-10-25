#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     string str;
//     cin >> str;
//     // while (next_permutation(s.begin(), s.end()))
//     // {
//     //     cout << s << endl;
//     // }
//     // string s1;
//     // cin >> s1;
//     // cout << typeid(s.find(s1)).name() << endl;

//     // cout << s.find(s1) << endl;
// #include <bits/stdc++.h>

//     using namespace std;

//     int BinaryToDecimal(int n)
//     {
//         int decimalValue = 0;
//         int base = 1;
//         while (n)
//         {
//             int lastDigit = n % 10;
//             n = n / 10;
//             decimalValue += lastDigit * base;
//             base = base * 2;
//         }
//         return decimalValue;
//     }

//     int main()
//     {
//         long long int n, t, x, y, a, b, p, r;
//         cin >> n >> x >> y;
//         cin >> t;
//         int powerX = 1;
//         for (int i = 0; i < x; i++)
//         {
//             powerX = powerX * 10;
//         }
//         p = (t / powerX) * powerX;
//         a = t - p;
//         int powerY = 1;
//         for (int i = 0; i < y; i++)
//         {
//             powerY = powerY * 10;
//         }
//         b = powerY;
//         r = BinaryToDecimal(a) - BinaryToDecimal(b);
//         cout << r << endl;
//         return 0;
//     }
//     return 0;
// }#include <iostream>
#include <set>

int main()
{
    string s, r;
    cin >> s;
    set<char> a(s.begin(), s.end());
    for (auto str : a)
    {
        r = r + str;
    }
    std::cout << r;
    return 0;
}