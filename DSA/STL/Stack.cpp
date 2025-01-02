#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<string> s;
    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");
    cout << "Top Element = " << s.top() << endl;
    s.pop();
    cout << (s.empty() ? "Stack is empty" : "Stack is not empty") << endl;
    cout << "Top Element = " << s.top() << endl;
    cout << "Stack size = " << s.size() << endl;
    return 0;
}