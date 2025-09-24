#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<ll> q;
    q.push(11);
    cout << "Front of the queue is : " << q.front() << "\n";
    q.push(15);
    cout << "Front of the queue is : " << q.front() << "\n";
    q.push(13);
    cout << "Front of the queue is : " << q.front() << "\n";
    cout << "Size of the queue is : " << q.size() << "\n";
    q.pop();
    q.pop();
    q.pop();
    cout << "Size of the queue is : " << q.size() << "\n";
    if (q.empty())
    {
        cout << "Queue is empty." << "\n";
    }
    else
    {
        cout << "Queue is not empty." << "\n";
    }

    return 0;
}