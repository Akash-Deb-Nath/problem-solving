#include <bits/stdc++.h>

using namespace std;

#define ll long long int

class Stack
{
    // Properties
public:
    int *arr;
    int top;
    int size;

    // Behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << "\n";
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << "\n";
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << "\n";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peak() << "\n";
    s.pop();
    cout << s.peak() << "\n";
    s.pop();
    cout << s.peak() << "\n";
    s.pop();
    cout << s.peak() << "\n";
    if (s.isEmpty())
    {
        cout << "Stack is empty mere dost" << "\n";
    }
    else
    {
        cout << "Stack is not empty mere dost" << "\n";
    }

    return 0;
}