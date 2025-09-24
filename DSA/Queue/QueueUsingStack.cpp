#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s;
    stack<int> temp;

public:
    void push(int x)
    {
        s.push(x);
    }

    void pop()
    {
        if (s.empty() && temp.empty())
        {
            cout << "Queue is empty\n";
            return;
        }
        if (temp.empty())
        {
            while (!s.empty())
            {
                int val = s.top();
                temp.push(val);
                s.pop();
            }
        }
        temp.pop();
    }

    int front()
    {
        if (s.empty() && temp.empty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        if (temp.empty())
        {
            while (!s.empty())
            {
                int val = s.top();
                temp.push(val);
                s.pop();
            }
        }
        return temp.top();
    }

    bool isEmpty()
    {
        return s.empty() && temp.empty();
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // qhould print 30
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Should print 20

    return 0;
}