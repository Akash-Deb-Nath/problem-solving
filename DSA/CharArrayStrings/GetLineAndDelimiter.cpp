#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char line[100];

    cout << "Enter a line (end with ';'): ";
    cin.getline(line, 100, ';'); // Read until ';' is encountered
    // Here ';' is the delimiter
    cout << "You entered: " << line << endl;

    return 0;
}