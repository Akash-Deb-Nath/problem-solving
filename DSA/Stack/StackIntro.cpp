#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Creation of stack
    stack<ll> s;

    // Push operation
    s.push(2);
    s.push(3);

    // Pop operation
    s.pop();

    cout << "Top element: " << s.top() << "\n";

    if (s.empty())
    {
        cout << "Stack is empty" << "\n";
    }
    else
    {
        cout << "Stack is not empty" << "\n";
    }
    cout << "Size of stack: " << s.size() << "\n";

    return 0;
}