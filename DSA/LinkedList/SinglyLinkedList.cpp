#include <bits/stdc++.h>

using namespace std;

#define ll long long int

class Node
{
public:
    int data;
    Node *next;
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // Create new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // Create new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // Insert at start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // Creating a new node for data
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << "\n";
    // cout << node1->next << "\n";

    // Head pointed to node1
    Node *head = node1;
    // Tail pointed to node1
    Node *tail = node1;

    print(head);

    insertAtTail(tail, 12);

    print(head);

    insertAtTail(tail, 15);

    print(head);

    insertAtPosition(head, tail, 2, 13);

    print(head);

    cout << "Head: " << head->data << "\n";
    cout << "Tail: " << tail->data << "\n";

    return 0;
}