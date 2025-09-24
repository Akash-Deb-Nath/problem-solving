#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q;

public:
    void push(int x)
    {
        q.push(x);
        int size = q.size();
        for (int i = 0; i < size - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (q.empty())
        {
            cout << "Stack is empty\n";
            return;
        }
        q.pop();
    }

    int top()
    {
        if (q.empty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    bool isEmpty()
    {
        return q.empty();
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Should print 30
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Should print 20

    return 0;
}