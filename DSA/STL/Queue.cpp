#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");
    cout << "Size before pop = " << q.size() << "\n";
    cout << "First Elemnet = " << q.front() << "\n";
    q.pop();
    cout << "Size after pop = " << q.size() << "\n";
    cout << "First Elemnet after pop = " << q.front() << "\n";
    return 0;
}