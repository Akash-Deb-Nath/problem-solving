#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char s[1000], r;
    cin >> s;
    cout << s << endl;
    cout << tolower(s[1000]) << endl;
}